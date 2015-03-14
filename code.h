#include "table.h"
#define CXMAX 200

int cx,cx1,cx2;
int err;
int t;

enum fct{lit,opr,lod,sto,cal,ini,jmp,jpc,ast,ald};

int s[STACKSIZE];

char *mnemonic[10]={"lit","opr","lod","sto","cal","ini","jmp","jpc","ast","ald"};

FILE *fa;
FILE *fa1,*fa2;
FILE *fin,*fout;
char fname[AL];

enum listswitcher{false,true};
enum listswitcher listswitch;

struct instruction{
	enum fct f;
	int l;
	int a;
};

struct instruction code[CXMAX+1];

extern int line;

error(int n){
	printf("***");
	//fputs("***",fa1);
	printf("error%d",n);
	//fprintf(fa1,"error%d",n);
	return yyerror("");
}

void gen(enum fct x,int y,int z)
{
	if(cx>CXMAX)
		printf("program too long!");
	code[cx].f=x;
	code[cx].l=y;
	code[cx].a=z;
	cx++;
}

void listcode( )
{
	int i;
	if(listswitch==true){
		for(i=0;i<=cx-1;i++){
			printf("%2d	%5s	%3d	%5d\n",i,mnemonic[(int)code[i].f],code[i].l,code[i].a);
			//fprintf(fa,"%2d	%5s	%3d	%5d\n",i,mnemonic[(int)code[i].f],code[i].l,code[i].a);
			}
		}
	
}

int base(int l,int b,int s[STACKSIZE])
{
	int b1;
	b1=b;
	while(l>0){
		b1=s[b1];
		l=l-1;
	}
	return b1;
}

void stack(){
	int fl=10;
	printf("--------------STACK---------------\n");
	while(fl){				
		printf("[%d] %d\n", fl, s[fl]);
		fl--;
	}
	printf("----------------------------------\n");	
}

void interpret()
{
	int p=0;
	int b=1; 
	int fl;
	struct instruction i;

	printf("********Start Cx Language*********\n");
 	t=0; //栈顶指针
	s[0]=0;
	s[1]=0;
	s[2]=0;
	s[3]=0;
	do{
		i=code[p];
		p=p+1;
		switch(i.f){
			case lit:
				t=t+1;
				s[t]=i.a;
				break;
			case opr:
				switch(i.a){
					case 0:
						t=b-1;
						//p=s[t+3];
						b=s[t+2];
						break;
					case 1:
						s[t]=-s[t];
						break;
					case 2:
						t=t-1;
						s[t]=s[t]+s[t+1];
						break;
					case 3:
						t=t-1;
						s[t]=s[t]-s[t+1];
						break;
					case 4:
						t=t-1;
						s[t]=s[t]*s[t+1];
						break;
					case 5:
						t=t-1;
						s[t]=s[t]/s[t+1];
						break;
					case 6:
						if(s[t]%2==0)
							s[t]=0;
						else
							s[t]=1;
						break;
					case 7:
						t=t-1;
						if(s[t]==s[t+1])
							s[t]=0;
						else
							s[t]=1;
						break;
					case 8:
						t=t-1;
						if(s[t]==s[t+1])
							s[t]=1;
						else
							s[t]=0;
						break;
					case 9:
						t=t-1;
						if(s[t]==s[t+1])
							s[t]=0;
						else
							s[t]=1;
						break;
					case 10:
						t--;
						if(s[t]<s[t+1])
							s[t]=1;
						else
							s[t]=0;
						break;
					case 11:
						t--;
						if(s[t]>=s[t+1])
							s[t]=1;
						else
							s[t]=0;
						break;
					case 12:
						t=t-1;
						if(s[t]>s[t+1])
							s[t]=1;
						else
							s[t]=0;
						break;
					case 13:
						t=t-1;
						if(s[t]<=s[t+1])
							s[t]=1;
						else
							s[t]=0;
						break;
					case 14: // write
						printf("%d\n",s[t]);
						t=t-1;
						break;

					case 15: // %
						t=t-1;
						s[t]=s[t]%s[t+1];
						break;

					case 16: // read
						t=t+1;
						printf("Please input:");
						scanf("%d",&s[t]);
						break;

					case 17: //else
						t=t + 1;
						if(s[t]){
							s[t] = 0;
						}
						else{
							s[t] = 1;
						}
						break;

					case 18: //or
						t=t - 1;
						if(s[t]==1||s[t+1]==1){
							s[t] = 1;
						}
						else{
							s[t] = 0;
						}
						break;

					case 19: //and
						t = t - 1;
						if(s[t]==1&&s[t+1]==1){
							s[t] = 1;
						}
						else{
							s[t] = 0;
						}
						break;

					case 20: //true
						t = t + 1;
						s[t] = 1;
						break;

					case 21: //false
						t = t + 1;
						s[t] = 0;
						break;
					case 22: //not
						if(s[t]){
							s[t] = 0;
						}
						else{
							s[t] = 1;
						}
						break;
					case 23: //++
						t--;
						s[t] = s[t] + 1;
						break;
					case 24: //--
						t--;
						s[t] = s[t] - 1;
						printf("decrement[%d]: %d\n", t, s[t]);
						break;
				}
				break;	
			case lod:
				t=t+1;
				s[t]=s[base(i.l,b,s)+i.a];
				break;
			case sto:
				s[base(i.l,b,s)+i.a]=s[t];
				t=t-1;
				break;
			case cal:
				s[t+1]=base(i.l,b,s);
				s[t+2]=b;
				s[t+3]=p;
				b=t+1;
				p=i.a;
				break;
			case ini:
				s[t+1]=base(i.l,b,s);
				s[t+2]=b;
				s[t+3]=p;
				b=t+1;
				t=t+i.a;
				// printf("address:%d\n", i.a);
				break;
			case jmp:
				p=i.a;
				break;
			case jpc:
				if(s[t]==0)
					p=i.a;
				t=t-1;
				break;
			case ald:
				s[t] = s[base(i.l,b,s)+i.a+s[t]];
				break;
			case ast:
				s[base(i.l,b,s)+i.a+s[t-1]] = s[t];
				//stack();
				t -= 2;
				break;
			}
		}while(p!=cx);
		printf("\n******End PL/0********\n");
		//fclose(fa2);
}