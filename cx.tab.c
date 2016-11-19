/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "cx.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include "malloc.h"
	#include "code.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "cx.y"
{
char *ident;
int number;
}
/* Line 193 of yacc.c.  */
#line 194 "cx.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 207 "cx.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   139

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,     9,    10,    18,    19,
      22,    23,    28,    29,    34,    35,    36,    45,    46,    49,
      50,    51,    58,    65,    66,    67,    78,    79,    80,    81,
      91,    95,    99,   100,   108,   110,   111,   112,   118,   119,
     120,   126,   127,   128,   138,   140,   142,   144,   148,   152,
     154,   158,   162,   164,   166,   168,   172,   177,   181,   185,
     187,   191,   193,   195,   197,   199,   202,   206,   208,   209,
     214,   215,   220,   221,   226,   227,   232,   233,   238,   239,
     244,   249,   250
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      48,    17,    51,    49,    57,    50,    18,    -1,    -1,    51,
      52,    -1,    -1,     3,    42,    53,    19,    -1,    -1,     4,
      42,    54,    19,    -1,    -1,    -1,     5,    42,    55,    39,
      41,    40,    56,    19,    -1,    -1,    57,    58,    -1,    -1,
      -1,    42,    59,    25,    73,    60,    19,    -1,     6,    15,
      74,    16,    58,    19,    -1,    -1,    -1,     6,    15,    74,
      16,    58,    61,     7,    58,    62,    19,    -1,    -1,    -1,
      -1,    13,    63,    15,    78,    16,    64,    58,    65,    19,
      -1,     9,    75,    19,    -1,     8,    42,    19,    -1,    -1,
       8,    42,    66,    39,    76,    40,    19,    -1,    47,    -1,
      -1,    -1,    42,    67,    37,    68,    19,    -1,    -1,    -1,
      42,    69,    38,    70,    19,    -1,    -1,    -1,    42,    71,
      39,    75,    40,    25,    75,    72,    19,    -1,    75,    -1,
      78,    -1,    78,    -1,    76,    32,    76,    -1,    76,    33,
      76,    -1,    76,    -1,    77,    34,    77,    -1,    77,    35,
      77,    -1,    77,    -1,    42,    -1,    41,    -1,    15,    75,
      16,    -1,    42,    39,    75,    40,    -1,    78,    23,    79,
      -1,    78,    24,    79,    -1,    79,    -1,    79,    22,    80,
      -1,    80,    -1,    42,    -1,    11,    -1,    12,    -1,    21,
      80,    -1,    15,    78,    16,    -1,    81,    -1,    -1,    42,
      82,    30,    75,    -1,    -1,    42,    83,    31,    75,    -1,
      -1,    42,    84,    28,    75,    -1,    -1,    42,    85,    29,
      75,    -1,    -1,    42,    86,    26,    75,    -1,    -1,    42,
      87,    27,    75,    -1,    14,    15,    77,    16,    -1,    -1,
      42,    88,    36,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    26,    31,    44,    52,    31,    59,    61,
      66,    65,    71,    70,    75,    77,    75,    83,    85,    90,
     105,    89,   113,   117,   123,   117,   128,   132,   136,   127,
     141,   143,   157,   156,   180,   187,   203,   186,   206,   222,
     205,   225,   240,   224,   251,   252,   255,   262,   264,   266,
     270,   272,   274,   278,   291,   301,   302,   322,   324,   326,
     330,   332,   336,   347,   349,   351,   353,   354,   359,   358,
     373,   372,   387,   386,   401,   400,   415,   414,   429,   428,
     442,   444,   443
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYM_int", "SYM_bool", "SYM_array",
  "SYM_if", "SYM_else", "SYM_read", "SYM_write", "SYM_null", "SYM_true",
  "SYM_false", "SYM_while", "SYM_odd", "LP", "RP", "LC", "RC", "SEMICOLON",
  "COMMA", "LOG_not", "LOG_and", "LOG_or", "LOG_xor", "ASSIGN", "EQ", "NE",
  "GT", "GE", "LT", "LE", "ADD", "SUB", "MUL", "DIV", "MOD", "INCRE",
  "DECRE", "LF", "RF", "SYM_number", "SYM_ident", "IFX", "$accept",
  "program", "@1", "block", "@2", "@3", "@4", "decls", "decl", "@5", "@6",
  "@7", "@8", "stmts", "stmt", "@9", "@10", "@11", "@12", "@13", "@14",
  "@15", "@16", "@17", "@18", "@19", "@20", "@21", "@22", "expression",
  "ifexpr", "aexpr", "aterm", "afactor", "bexpr", "bterm", "bfactor",
  "rel", "@23", "@24", "@25", "@26", "@27", "@28", "@29", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    46,    45,    48,    49,    50,    47,    51,    51,
      53,    52,    54,    52,    55,    56,    52,    57,    57,    59,
      60,    58,    58,    61,    62,    58,    63,    64,    65,    58,
      58,    58,    66,    58,    58,    67,    68,    58,    69,    70,
      58,    71,    72,    58,    73,    73,    74,    75,    75,    75,
      76,    76,    76,    77,    77,    77,    77,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    82,    81,
      83,    81,    84,    81,    85,    81,    86,    81,    87,    81,
      81,    88,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     0,     0,     7,     0,     2,
       0,     4,     0,     4,     0,     0,     8,     0,     2,     0,
       0,     6,     6,     0,     0,    10,     0,     0,     0,     9,
       3,     3,     0,     7,     1,     0,     0,     5,     0,     0,
       5,     0,     0,     9,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     1,     1,     3,     4,     3,     3,     1,
       3,     1,     1,     1,     1,     2,     3,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       4,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,     3,     0,     8,     5,     0,     0,
       0,    17,     9,    10,    12,    14,     4,     0,     0,     0,
       0,     0,     0,    26,    19,    34,     0,    18,    11,    13,
       0,     0,    32,     0,    54,    53,     0,    49,    52,     0,
       0,     0,     0,     0,     7,     0,    63,    64,     0,     0,
       0,    62,     0,    46,    59,    61,    67,    31,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,    36,    39,
       0,    15,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,    55,     0,    47,
      48,    50,    51,     0,     0,    53,    20,    44,    45,     0,
       0,     0,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,    23,    57,    58,    60,     0,    56,    27,     0,
      37,    40,     0,    16,    80,    69,    71,    73,    75,    77,
      79,    82,    22,     0,     0,     4,    21,     0,     4,    33,
      28,    42,    24,     0,     0,     0,    29,    43,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    25,     5,    11,    26,     7,    12,    17,
      18,    19,   102,    16,    27,    40,   119,   133,   145,    39,
     135,   143,    58,    41,    99,    42,   100,    43,   144,    96,
      52,    59,    37,    38,    73,    54,    55,    56,    75,    76,
      77,    78,    79,    80,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int8 yypact[] =
{
     -82,    12,   -82,   -82,   -82,     9,   -82,    74,   -21,    11,
      14,   -82,   -82,   -82,   -82,   -82,    -3,    27,    42,    57,
      82,    56,   -11,   -82,    43,   -82,    81,   -82,   -82,   -82,
      60,    13,    83,   -11,   -82,    65,    84,   -16,     1,    90,
      85,    69,    70,    68,   -82,    71,   -82,   -82,    94,    13,
      13,    64,    96,    47,    91,   -82,   -82,   -82,    75,   100,
     -11,   -82,   -11,   -11,   -11,   -11,    13,     8,   -82,   -82,
     -11,   -82,   -11,    17,   -82,    87,    88,    92,    89,    95,
      97,    86,     5,    13,    13,    13,   -11,   -82,    93,   -82,
     -82,   -82,   -82,    28,     8,    36,   -82,   -82,    47,   104,
     106,    98,   107,   111,   -82,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   109,    91,    91,   -82,    99,   -82,   -82,   110,
     -82,   -82,   105,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   124,   113,     5,   -82,   -11,     5,   -82,
     -82,   -82,   -82,   115,   116,   117,   -82,   -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   135,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -81,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -22,   -54,     4,   -24,   -10,   -48,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      36,   112,    74,    20,    33,    21,    22,    53,    89,    90,
      23,    20,     3,    21,    22,    -6,    62,    63,    23,    46,
      47,    13,    48,    94,    46,    47,     6,    48,    49,    50,
      34,    35,   116,   104,    50,    64,    65,   115,    88,    24,
      83,    84,    93,    98,   118,    97,    28,    24,   101,    34,
      95,    83,    84,    14,   140,    51,    15,   142,   -62,   -62,
     -62,    29,   -76,   -78,   -72,   -74,   -68,   -70,    91,    92,
      83,    84,   -81,   113,   114,    60,   103,     8,     9,    10,
     -35,   -38,   -41,   125,   126,   127,   128,   129,   130,   131,
     -76,   -78,   -72,   -74,   -68,   -70,    30,    31,    32,    44,
     -81,    45,    57,    61,    60,    66,    68,    70,    69,    72,
      67,    71,    82,    85,    86,   141,    87,   105,   108,   106,
     107,   109,   111,   120,   110,   121,   123,   124,   132,   136,
     137,   138,   139,   117,   146,   147,   148,     4,   122,   134
};

static const yytype_uint8 yycheck[] =
{
      22,    82,    50,     6,    15,     8,     9,    31,    62,    63,
      13,     6,     0,     8,     9,    18,    32,    33,    13,    11,
      12,    42,    14,    15,    11,    12,    17,    14,    15,    21,
      41,    42,    86,    16,    21,    34,    35,    85,    60,    42,
      23,    24,    66,    67,    16,    67,    19,    42,    70,    41,
      42,    23,    24,    42,   135,    42,    42,   138,    22,    23,
      24,    19,    26,    27,    28,    29,    30,    31,    64,    65,
      23,    24,    36,    83,    84,    39,    72,     3,     4,     5,
      37,    38,    39,   105,   106,   107,   108,   109,   110,   111,
      26,    27,    28,    29,    30,    31,    39,    15,    42,    18,
      36,    41,    19,    19,    39,    15,    37,    39,    38,    15,
      25,    40,    16,    22,    39,   137,    16,    30,    29,    31,
      28,    26,    36,    19,    27,    19,    19,    16,    19,    19,
      25,     7,    19,    40,    19,    19,    19,     2,    40,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,    47,    48,    17,    51,     3,     4,
       5,    49,    52,    42,    42,    42,    57,    53,    54,    55,
       6,     8,     9,    13,    42,    47,    50,    58,    19,    19,
      39,    15,    42,    15,    41,    42,    75,    76,    77,    63,
      59,    67,    69,    71,    18,    41,    11,    12,    14,    15,
      21,    42,    74,    78,    79,    80,    81,    19,    66,    75,
      39,    19,    32,    33,    34,    35,    15,    25,    37,    38,
      39,    40,    15,    78,    80,    82,    83,    84,    85,    86,
      87,    88,    16,    23,    24,    22,    39,    16,    75,    76,
      76,    77,    77,    78,    15,    42,    73,    75,    78,    68,
      70,    75,    56,    77,    16,    30,    31,    28,    29,    26,
      27,    36,    58,    79,    79,    80,    76,    40,    16,    60,
      19,    19,    40,    19,    16,    75,    75,    75,    75,    75,
      75,    75,    19,    61,    40,    64,    19,    25,     7,    19,
      58,    75,    58,    65,    72,    62,    19,    19,    19
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 26 "cx.y"
    {lev--;;}
    break;

  case 4:
#line 31 "cx.y"
    { // px0 block
		strcpy(id,"pro");
		enter(VALUE_INT);
		lev++;
		dx=3;
		levelReg[lev].tx0=tx;
		table[tx].adr=cx;
		gen(jmp,0,1);
		if(lev>LEVMAX)
			error(32);
	;}
    break;

  case 5:
#line 44 "cx.y"
    { // pl0 declarelist
		code[table[levelReg[lev].tx0].adr].a=cx;
		table[levelReg[lev].tx0].adr=cx;
		table[levelReg[lev].tx0].size=dx;
		levelReg[lev].cx0=cx;
		gen(ini,0,dx);
	;}
    break;

  case 6:
#line 52 "cx.y"
    {
		gen(opr,0,0);
		printf("\n");
	;}
    break;

  case 10:
#line 66 "cx.y"
    {
		strcpy(id,(yyvsp[(2) - (2)].ident));
		enter(VALUE_INT);
	;}
    break;

  case 12:
#line 71 "cx.y"
    {
		strcpy(id,(yyvsp[(2) - (2)].ident));
		enter(VALUE_BOOL);
	;}
    break;

  case 14:
#line 75 "cx.y"
    {
		strcpy(id,(yyvsp[(2) - (2)].ident));
	;}
    break;

  case 15:
#line 77 "cx.y"
    {
		num=(yyvsp[(5) - (6)].number);
		enter(VALUE_ARRAY);
	;}
    break;

  case 19:
#line 90 "cx.y"
    {
		int i;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(0);
		}else{
			if(table[i].kind!=VALUE_INT&&table[i].kind!=VALUE_BOOL){
				error(12);
				i=0;
				}
			}
			(yyval.number)=i;
	;}
    break;

  case 20:
#line 105 "cx.y"
    {
		int i,inum;
		if((yyvsp[(2) - (4)].number)!=0){
			i=(yyvsp[(2) - (4)].number);
			gen(sto,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 22:
#line 114 "cx.y"
    {
		code[(yyvsp[(3) - (6)].number)].a=cx;
	;}
    break;

  case 23:
#line 117 "cx.y"
    {
		(yyval.number)=cx;
		code[(yyvsp[(3) - (5)].number)].a=cx+1;
		gen(jmp,0,0);
	;}
    break;

  case 24:
#line 123 "cx.y"
    {
		code[(yyvsp[(6) - (8)].number)].a=cx;
	;}
    break;

  case 26:
#line 128 "cx.y"
    {
		(yyval.number)=cx;
	;}
    break;

  case 27:
#line 132 "cx.y"
    {
		(yyval.number)=cx;
		gen(jpc,0,0);
	;}
    break;

  case 28:
#line 136 "cx.y"
    {
		gen(jmp,0,(yyvsp[(2) - (7)].number));
		code[(yyvsp[(6) - (7)].number)].a=cx;
	;}
    break;

  case 30:
#line 142 "cx.y"
    {gen(opr,0,14);;}
    break;

  case 31:
#line 144 "cx.y"
    {
		int i;
		strcpy(id,(yyvsp[(2) - (3)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(opr,0,16);
			gen(sto,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 32:
#line 157 "cx.y"
    {
		int i;
		strcpy(id,(yyvsp[(2) - (2)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_ARRAY){
				error(12);
				i=0;
			}
		}
		(yyval.number)=i;
	;}
    break;

  case 33:
#line 172 "cx.y"
    {
		int i;
		if((yyvsp[(3) - (7)].number)!=0){
			i = (yyvsp[(3) - (7)].number);
			gen(opr,0,16);
			gen(ast,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 34:
#line 181 "cx.y"
    {
		tx = levelReg[lev].tx0 - 1;
		lev --;
		dx = levelReg[lev].dx0;
	;}
    break;

  case 35:
#line 187 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_INT){
				error(12);
				i=0;
			}
			else
				gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 36:
#line 203 "cx.y"
    {gen(opr,0,23);;}
    break;

  case 38:
#line 206 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_INT){
				error(12);
				i=0;
			}
			else
				gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 39:
#line 222 "cx.y"
    {gen(opr,0,24);;}
    break;

  case 41:
#line 225 "cx.y"
    {
		int i;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind!=VALUE_ARRAY){
				error(12);
				i=0;
			}
		}
		(yyval.number)=i;
	;}
    break;

  case 42:
#line 240 "cx.y"
    {
		int i;
		if((yyvsp[(2) - (7)].number)!=0){
			i = (yyvsp[(2) - (7)].number);
			gen(ast,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 46:
#line 256 "cx.y"
    {
		(yyval.number)=cx;
		gen(jpc,0,0);
	;}
    break;

  case 47:
#line 263 "cx.y"
    {gen(opr,0,2);;}
    break;

  case 48:
#line 265 "cx.y"
    {gen(opr,0,3);;}
    break;

  case 50:
#line 271 "cx.y"
    {gen(opr,0,4);;}
    break;

  case 51:
#line 273 "cx.y"
    {gen(opr,0,5);;}
    break;

  case 53:
#line 279 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 54:
#line 292 "cx.y"
    {
		int num;
		num=(yyvsp[(1) - (1)].number);
		if(num>AMAX){
			error(31);
			num=0;
		}
		gen(lit,0,num);
	;}
    break;

  case 56:
#line 303 "cx.y"
    {
		int i;
		strcpy(id,(yyvsp[(1) - (4)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			if(table[i].kind != VALUE_ARRAY){
				error(12);
				i=0;
			}
			else{
				gen(ald,lev-table[i].level,table[i].adr);
			}
		}		
	;}
    break;

  case 57:
#line 323 "cx.y"
    {gen(opr,0,18);;}
    break;

  case 58:
#line 325 "cx.y"
    {gen(opr,0,7);;}
    break;

  case 60:
#line 331 "cx.y"
    {gen(opr,0,19);;}
    break;

  case 62:
#line 337 "cx.y"
    {
		int i;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0)
			error(35);
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 63:
#line 348 "cx.y"
    {gen(opr,0,20);;}
    break;

  case 64:
#line 350 "cx.y"
    {gen(opr,0,21);;}
    break;

  case 65:
#line 352 "cx.y"
    {gen(opr,0,22);;}
    break;

  case 68:
#line 359 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 69:
#line 371 "cx.y"
    {gen(opr,0,10);;}
    break;

  case 70:
#line 373 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 71:
#line 385 "cx.y"
    {gen(opr,0,13);;}
    break;

  case 72:
#line 387 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 73:
#line 399 "cx.y"
    {gen(opr,0,12);;}
    break;

  case 74:
#line 401 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 75:
#line 413 "cx.y"
    {gen(opr,0,11);;}
    break;

  case 76:
#line 415 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 77:
#line 427 "cx.y"
    {gen(opr,0,8);;}
    break;

  case 78:
#line 429 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 79:
#line 441 "cx.y"
    {gen(opr,0,9);;}
    break;

  case 80:
#line 442 "cx.y"
    {gen(opr,0,6);;}
    break;

  case 81:
#line 444 "cx.y"
    {
		int i;
		int fl = 0;
		strcpy(id,(yyvsp[(1) - (1)].ident));
		i=position(id);
		if(i==0){
			error(35);
		}
		else{
			gen(lod,lev-table[i].level,table[i].adr);
		}
	;}
    break;

  case 82:
#line 456 "cx.y"
    {gen(opr,0,15);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2098 "cx.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 459 "cx.y"

int yyerror(char const *str){
	extern char *yytext;
	fprintf(stderr, "parser error near %s\n", yytext);
	return 0;
}

int main()
{
	
	printf("Please input the filename:\n");
	scanf("%s",&fname);
	if((fin=fopen(fname,"r"))==NULL){
		printf("Cann't open file according to given filename\n");
		exit(0);
	}
	redirectInput(fin);
	listswitch=true;
	err=0;

	yyparse();

	if(err==0){
		listcode();
		interpret();
		//stack();
	}
	else{
		printf("%d errors in cx program\n",err);
	}
	//fclose(fin);
	//getchar();
	return 0;
}
