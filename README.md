# Cx-compiler

#### A compiler of Cx language based on Lex and Yacc

1)	\\<program\\> ∷= \\<block\\>      
2)	\<block\> ∷= {\<decls\> \<stmts\>}                
3)	\<decls\> ∷=\<decls\> \<decl\> | ε                
4)	\<decl\> ∷= int \<aid\>; | bool \<bid\>;                    
5)	\<aid\> ∷= \<ID\>                  
6)	\<bid\> ∷= \<ID\>                
7)	\<stmts\> ∷= \<stmts\> \<stmt\> | ε               
8)	\<stmt\> ∷= \<aid\> = \<aexpr\>; | \<bid\> = \<bexpr\>; | if (\<bexpr\>) \<stmt\>; |  if (\<bexpr\>) \<stmt\> else \<stmt\>; | while (\<bexpr\>) \<stmt\>; | write \<aexpr\>; | read \<aid\>; |  \<block\>                   
9)	\<aexpr\> ∷= \<aterm\> + \<aterm\> | \<aterm\> - \<aterm\> | \<aterm\>                   
10)	\<aterm\> ∷= \<afactor\> * \<afactor\> | \<afactor\> / \<afactor\> | \<afactor\>                        
11)	\<afactor\> ∷= \<aid\> | NUM | (\<aexpr\>)                    
12)	\<bexpr\> ∷= \<bexpr\> || \<bterm\> | \<bterm\>                    
13)	\<bterm\> ∷= \<bterm\> && \<bfactor\> | \<bfactor\>                 
14)	\<bfactor\> ∷= \<bid\> | true | false | ! \<bfactor\> | (\<bexpr\>) | \<rel\>                     
15)	\<rel\> ∷= (\<aid\>|NUM) (\< | \<= | \> | \>= | == | !=) \<aexpr\>                       
