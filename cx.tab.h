/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SYM_int = 258,
     SYM_bool = 259,
     SYM_array = 260,
     SYM_if = 261,
     SYM_else = 262,
     SYM_read = 263,
     SYM_write = 264,
     SYM_null = 265,
     SYM_true = 266,
     SYM_false = 267,
     SYM_while = 268,
     SYM_odd = 269,
     LP = 270,
     RP = 271,
     LC = 272,
     RC = 273,
     SEMICOLON = 274,
     COMMA = 275,
     LOG_not = 276,
     LOG_and = 277,
     LOG_or = 278,
     LOG_xor = 279,
     ASSIGN = 280,
     EQ = 281,
     NE = 282,
     GT = 283,
     GE = 284,
     LT = 285,
     LE = 286,
     ADD = 287,
     SUB = 288,
     MUL = 289,
     DIV = 290,
     MOD = 291,
     INCRE = 292,
     DECRE = 293,
     LF = 294,
     RF = 295,
     SYM_number = 296,
     SYM_ident = 297,
     IFX = 298
   };
#endif
/* Tokens.  */
#define SYM_int 258
#define SYM_bool 259
#define SYM_array 260
#define SYM_if 261
#define SYM_else 262
#define SYM_read 263
#define SYM_write 264
#define SYM_null 265
#define SYM_true 266
#define SYM_false 267
#define SYM_while 268
#define SYM_odd 269
#define LP 270
#define RP 271
#define LC 272
#define RC 273
#define SEMICOLON 274
#define COMMA 275
#define LOG_not 276
#define LOG_and 277
#define LOG_or 278
#define LOG_xor 279
#define ASSIGN 280
#define EQ 281
#define NE 282
#define GT 283
#define GE 284
#define LT 285
#define LE 286
#define ADD 287
#define SUB 288
#define MUL 289
#define DIV 290
#define MOD 291
#define INCRE 292
#define DECRE 293
#define LF 294
#define RF 295
#define SYM_number 296
#define SYM_ident 297
#define IFX 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "cx.y"
{
char *ident;
int number;
}
/* Line 1529 of yacc.c.  */
#line 140 "cx.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

