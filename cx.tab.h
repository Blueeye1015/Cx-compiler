typedef union {
char *ident;
int number;
} YYSTYPE;
#define	SYM_int	257
#define	SYM_bool	258
#define	SYM_array	259
#define	SYM_if	260
#define	SYM_else	261
#define	SYM_read	262
#define	SYM_write	263
#define	SYM_null	264
#define	SYM_true	265
#define	SYM_false	266
#define	SYM_while	267
#define	SYM_odd	268
#define	LP	269
#define	RP	270
#define	LC	271
#define	RC	272
#define	SEMICOLON	273
#define	COMMA	274
#define	LOG_not	275
#define	LOG_and	276
#define	LOG_or	277
#define	LOG_xor	278
#define	ASSIGN	279
#define	EQ	280
#define	NE	281
#define	GT	282
#define	GE	283
#define	LT	284
#define	LE	285
#define	ADD	286
#define	SUB	287
#define	MUL	288
#define	DIV	289
#define	MOD	290
#define	INCRE	291
#define	DECRE	292
#define	LF	293
#define	RF	294
#define	SYM_number	295
#define	SYM_ident	296
#define	IFX	297


extern YYSTYPE yylval;
