/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/main.y"

    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );

#line 79 "src/main.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MAIN = 258,
    PRINTF = 259,
    SCANF = 260,
    SCANF_TYPE_1_d = 261,
    GUIDE = 262,
    T_CHAR = 263,
    T_INT = 264,
    T_STRING = 265,
    T_BOOL = 266,
    T_VOID = 267,
    ASSIGN = 268,
    ADD_ASSIGN = 269,
    SUB_ASSIGN = 270,
    SELF_ADD = 271,
    SELF_SUB = 272,
    IDENTIFIER = 273,
    INTEGER = 274,
    CHAR = 275,
    BOOL = 276,
    STRING = 277,
    AND = 278,
    OR = 279,
    TRUE = 280,
    FALSE = 281,
    IF = 282,
    ELSE = 283,
    WHILE = 284,
    FOR = 285,
    EQ = 286,
    UNEQ = 287,
    BIGGER = 288,
    SMALLER = 289,
    BIGGER_EQ = 290,
    SMALLER_EQ = 291,
    ADD = 292,
    SUB = 293,
    MUL = 294,
    DIV = 295,
    MODULA = 296,
    UN = 297,
    LPAREN = 298,
    RPAREN = 299,
    LSB = 300,
    RSB = 301,
    LBRACE = 302,
    RBRACE = 303,
    SEMICOLON = 304,
    COMMA = 305,
    DOUBLE_MARK = 306,
    LOWER_THEN_ELSE = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

#define YYUNDEFTOK  2
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    58,    59,    63,    64,    65,    66,    67,
      68,    69,    70,    74,    86,    94,   104,   126,   151,   157,
     163,   169,   179,   183,   191,   201,   209,   216,   223,   230,
     237,   251,   258,   266,   267,   279,   286,   292,   299,   306,
     313,   320,   327,   334,   344,   352,   360,   368,   376,   383,
     389,   405,   408,   411,   414,   419,   420,   421,   422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "PRINTF", "SCANF",
  "SCANF_TYPE_1_d", "GUIDE", "T_CHAR", "T_INT", "T_STRING", "T_BOOL",
  "T_VOID", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "SELF_ADD", "SELF_SUB",
  "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING", "AND", "OR", "TRUE",
  "FALSE", "IF", "ELSE", "WHILE", "FOR", "EQ", "UNEQ", "BIGGER", "SMALLER",
  "BIGGER_EQ", "SMALLER_EQ", "ADD", "SUB", "MUL", "DIV", "MODULA", "UN",
  "LPAREN", "RPAREN", "LSB", "RSB", "LBRACE", "RBRACE", "SEMICOLON",
  "COMMA", "DOUBLE_MARK", "LOWER_THEN_ELSE", "$accept", "program",
  "statements", "statement", "scanf", "if_statement", "while_statement",
  "for_statement", "self_assign", "bool_statement", "printf",
  "declaration", "IDENTIFIERS", "bool_expr", "expr", "T", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF (-27)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      69,   -26,    -8,   -27,   -27,   -27,   -27,     8,    10,    10,
      13,    69,   -27,    57,    69,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,    64,    70,   -10,    70,    70,    70,    75,    69,
      69,   153,    22,   -27,   -27,    -2,    34,   -27,   -27,   -27,
     -27,    70,    70,   129,    79,   137,    27,    82,    87,   -27,
     -27,    75,    31,   119,    58,   -27,    75,   -27,    70,   -27,
      73,   -27,    93,   -27,    70,    70,    70,    70,    70,   -27,
      51,   -27,   -27,   -27,   -27,   -17,   111,    75,    75,   -27,
      70,    70,    70,    70,    70,    70,    69,     1,   100,    53,
     -27,    93,    93,   -27,   -27,   -27,    59,   -17,   -17,   145,
     145,   145,   145,   145,   145,   -27,    21,   -27,   103,    89,
      96,    -3,    67,    97,   -27,   -27,   -27,   -27,    69,    85,
     -27,    81,   -27
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    56,    55,    57,    58,     0,     0,     0,
       0,     0,     5,     0,     2,     3,    12,     7,     8,     9,
      11,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     4,     0,     0,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    15,    16,     0,    10,     0,    26,
       0,    27,    50,    49,     0,     0,     0,     0,     0,    23,
       0,    24,    28,    29,    30,    36,    49,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      31,    44,    45,    46,    47,    48,     0,    38,    37,    35,
      39,    40,    41,    43,    42,    14,     0,    25,     0,     0,
       0,     0,     0,     0,    20,    21,    18,    19,     0,     0,
      17,     0,    13
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,   124,   -14,   -27,   -27,   -27,   -27,   -27,   139,
     -27,   132,   112,    28,   -22,   -27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,   112,    29,
      20,    21,    36,    52,    53,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      34,    43,    45,    46,    47,    48,    77,    78,    37,    38,
      39,    58,    40,   116,   117,    54,    55,    23,    34,    62,
      63,    25,    26,    27,    77,    78,     1,     2,    41,    76,
       3,     4,    42,     5,     6,    24,    88,   109,   110,   111,
       7,    44,    91,    92,    93,    94,    95,    59,    60,     8,
     106,     9,    10,    28,    77,    78,    31,    33,    99,   100,
     101,   102,   103,   104,    64,    65,    66,    67,    68,    11,
      57,    12,   105,     1,     2,    79,    72,     3,     4,    75,
       5,     6,    35,    61,    87,    70,    86,     7,    37,    38,
      39,    89,    40,    37,    38,    39,     8,    40,     9,    10,
      49,    50,    96,    60,   120,    97,    98,   114,    41,   108,
     113,   118,    42,    41,   115,   119,    11,    51,    12,    64,
      65,    66,    67,    68,    64,    65,    66,    67,    68,   121,
     122,    73,    66,    67,    68,    32,    74,    64,    65,    66,
      67,    68,    80,    81,    82,    83,    84,    85,    30,   107,
      80,    81,    82,    83,    84,    85,    64,    65,    66,    67,
      68,     3,     4,    56,     5,     6,    64,    65,    66,    67,
      68,     7,    90,    69,    64,    65,    66,    67,    68,     0,
       0,    71,    64,    65,    66,    67,    68
};

static const yytype_int8 yycheck[] =
{
      14,    23,    24,    25,    26,    27,    23,    24,    18,    19,
      20,    13,    22,    16,    17,    29,    30,    43,    32,    41,
      42,    13,    14,    15,    23,    24,     4,     5,    38,    51,
       8,     9,    42,    11,    12,    43,    58,    16,    17,    18,
      18,    51,    64,    65,    66,    67,    68,    49,    50,    27,
      49,    29,    30,    43,    23,    24,    43,     0,    80,    81,
      82,    83,    84,    85,    37,    38,    39,    40,    41,    47,
      48,    49,    86,     4,     5,    44,    49,     8,     9,    51,
      11,    12,    18,    49,    56,     6,    28,    18,    18,    19,
      20,    18,    22,    18,    19,    20,    27,    22,    29,    30,
      25,    26,    51,    50,   118,    77,    78,    18,    38,    50,
       7,    44,    42,    38,    18,    18,    47,    42,    49,    37,
      38,    39,    40,    41,    37,    38,    39,    40,    41,    44,
      49,    49,    39,    40,    41,    11,    49,    37,    38,    39,
      40,    41,    31,    32,    33,    34,    35,    36,     9,    49,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     8,     9,    31,    11,    12,    37,    38,    39,    40,
      41,    18,    60,    44,    37,    38,    39,    40,    41,    -1,
      -1,    44,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     8,     9,    11,    12,    18,    27,    29,
      30,    47,    49,    54,    55,    56,    57,    58,    59,    60,
      63,    64,    68,    43,    43,    13,    14,    15,    43,    62,
      62,    43,    55,     0,    56,    18,    65,    18,    19,    20,
      22,    38,    42,    67,    51,    67,    67,    67,    67,    25,
      26,    42,    66,    67,    56,    56,    64,    48,    13,    49,
      50,    49,    67,    67,    37,    38,    39,    40,    41,    44,
       6,    44,    49,    49,    49,    66,    67,    23,    24,    44,
      31,    32,    33,    34,    35,    36,    28,    66,    67,    18,
      65,    67,    67,    67,    67,    67,    51,    66,    66,    67,
      67,    67,    67,    67,    67,    56,    49,    49,    50,    16,
      17,    18,    61,     7,    18,    18,    16,    17,    44,    18,
      56,    44,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    58,    58,    59,    60,    61,    61,
      61,    61,    62,    63,    57,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       3,     1,     1,    10,     5,     3,     3,     8,     2,     2,
       2,     2,     3,     4,     4,     5,     3,     3,     4,     4,
       4,     3,     1,     1,     1,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 54 "src/main.y"
             {root = new TreeNode(1, NODE_PROG); root->addChild(yyvsp[0]);}
#line 1449 "src/main.tab.cpp"
    break;

  case 3:
#line 58 "src/main.y"
             {yyval=yyvsp[0];}
#line 1455 "src/main.tab.cpp"
    break;

  case 4:
#line 59 "src/main.y"
                        {yyval=yyvsp[-1]; yyval->addSibling(yyvsp[0]);}
#line 1461 "src/main.tab.cpp"
    break;

  case 5:
#line 63 "src/main.y"
             {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_SKIP;}
#line 1467 "src/main.tab.cpp"
    break;

  case 6:
#line 64 "src/main.y"
              {yyval = yyvsp[0];}
#line 1473 "src/main.tab.cpp"
    break;

  case 7:
#line 65 "src/main.y"
               {yyval=yyvsp[0];}
#line 1479 "src/main.tab.cpp"
    break;

  case 8:
#line 66 "src/main.y"
                  {yyval=yyvsp[0];}
#line 1485 "src/main.tab.cpp"
    break;

  case 9:
#line 67 "src/main.y"
                {yyval=yyvsp[0];}
#line 1491 "src/main.tab.cpp"
    break;

  case 10:
#line 68 "src/main.y"
                           {yyval=yyvsp[-1];}
#line 1497 "src/main.tab.cpp"
    break;

  case 11:
#line 69 "src/main.y"
         {yyval=yyvsp[0];}
#line 1503 "src/main.tab.cpp"
    break;

  case 12:
#line 70 "src/main.y"
         {yyval=yyvsp[0];}
#line 1509 "src/main.tab.cpp"
    break;

  case 13:
#line 74 "src/main.y"
                                                                                             {
	TreeNode *node=new TreeNode(yyvsp[-9]->lineno,NODE_STMT);
    node->stype=STMT_SCANF;
	node->addChild(yyvsp[-6]);
    node->addChild(yyvsp[-2]);
	yyval=node;
}
#line 1521 "src/main.tab.cpp"
    break;

  case 14:
#line 86 "src/main.y"
                                             {
	TreeNode *node=new TreeNode(yyvsp[-4]->lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1534 "src/main.tab.cpp"
    break;

  case 15:
#line 94 "src/main.y"
                                                  {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild(yyvsp[-1]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1546 "src/main.tab.cpp"
    break;

  case 16:
#line 104 "src/main.y"
                                 {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    node->stype=STMT_WHILE;
    node->addChild(yyvsp[-1]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1558 "src/main.tab.cpp"
    break;

  case 17:
#line 126 "src/main.y"
                                                                           {
	TreeNode *node=new TreeNode(yyvsp[-7]->lineno,NODE_STMT);
    node->stype=STMT_FOR;
   	node->addChild(yyvsp[-5]);
   	node->addChild(yyvsp[-4]);
	node->addChild(yyvsp[-2]);
	node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1572 "src/main.tab.cpp"
    break;

  case 18:
#line 151 "src/main.y"
                     {
	TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    node->stype=STMT_SELF;
    node->addChild(yyvsp[-1]);
    yyval=node;
}
#line 1583 "src/main.tab.cpp"
    break;

  case 19:
#line 157 "src/main.y"
                      {
	TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
	node->stype=STMT_SELF;
    node->addChild(yyvsp[-1]);
	yyval=node;
}
#line 1594 "src/main.tab.cpp"
    break;

  case 20:
#line 163 "src/main.y"
                     {
	TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    node->stype=STMT_SELF;
    node->addChild(yyvsp[-1]);
    yyval=node;	
}
#line 1605 "src/main.tab.cpp"
    break;

  case 21:
#line 169 "src/main.y"
                     {
	TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_STMT);
    node->stype=STMT_SELF;  
    node->addChild(yyvsp[-1]);
    yyval=node;
}
#line 1616 "src/main.tab.cpp"
    break;

  case 22:
#line 179 "src/main.y"
                           {yyval=yyvsp[-1];}
#line 1622 "src/main.tab.cpp"
    break;

  case 23:
#line 183 "src/main.y"
                            {
    TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    node->stype=STMT_PRINTF;
    node->addChild(yyvsp[-1]);
    yyval=node;
}
#line 1633 "src/main.tab.cpp"
    break;

  case 24:
#line 191 "src/main.y"
                           {
    TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    node->stype=STMT_SCANF;
    node->addChild(yyvsp[-1]);
    yyval=node;
}
#line 1644 "src/main.tab.cpp"
    break;

  case 25:
#line 201 "src/main.y"
                                    {  // declare and init
    TreeNode* node = new TreeNode(yyvsp[-4]->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild(yyvsp[-4]);
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-1]);
    yyval = node;   
}
#line 1657 "src/main.tab.cpp"
    break;

  case 26:
#line 209 "src/main.y"
                        {
    TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[-1]);
    yyval = node;   
}
#line 1669 "src/main.tab.cpp"
    break;

  case 27:
#line 216 "src/main.y"
                         {
	TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    node->stype=STMT_DECL;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[-1]);
    yyval=node; 
}
#line 1681 "src/main.tab.cpp"
    break;

  case 28:
#line 223 "src/main.y"
                                  {
	TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    node->stype=STMT_ASSIGN;
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-1]);
    yyval=node;  
}
#line 1693 "src/main.tab.cpp"
    break;

  case 29:
#line 230 "src/main.y"
                                      {
	TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    node->stype=STMT_ASSIGN;
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-1]);
    yyval=node;
}
#line 1705 "src/main.tab.cpp"
    break;

  case 30:
#line 237 "src/main.y"
                                      {
	TreeNode *node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
    node->stype=STMT_ASSIGN;
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-1]);
    yyval=node;  
}
#line 1717 "src/main.tab.cpp"
    break;

  case 31:
#line 251 "src/main.y"
                              {
	TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
    node->stype=STMT_DECL;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node; 
}
#line 1729 "src/main.tab.cpp"
    break;

  case 32:
#line 258 "src/main.y"
            {
	yyval=yyvsp[0];
}
#line 1737 "src/main.tab.cpp"
    break;

  case 33:
#line 266 "src/main.y"
       {yyval=yyvsp[0];}
#line 1743 "src/main.tab.cpp"
    break;

  case 34:
#line 267 "src/main.y"
        {yyval=yyvsp[0];}
#line 1749 "src/main.tab.cpp"
    break;

  case 35:
#line 279 "src/main.y"
               {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_EQ;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1761 "src/main.tab.cpp"
    break;

  case 36:
#line 286 "src/main.y"
               {
 	TreeNode *node=new TreeNode(yyvsp[-1]->lineno,NODE_OP);
    node->optype=OP_UN;
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1772 "src/main.tab.cpp"
    break;

  case 37:
#line 292 "src/main.y"
                         {
	TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
	node->optype=OP_OR;    
	node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1784 "src/main.tab.cpp"
    break;

  case 38:
#line 299 "src/main.y"
                          {    
	TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_AND;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1796 "src/main.tab.cpp"
    break;

  case 39:
#line 306 "src/main.y"
                 {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_UNEQ;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1808 "src/main.tab.cpp"
    break;

  case 40:
#line 313 "src/main.y"
                   {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_BIGGER;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1820 "src/main.tab.cpp"
    break;

  case 41:
#line 320 "src/main.y"
                    {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_SMALLER;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1832 "src/main.tab.cpp"
    break;

  case 42:
#line 327 "src/main.y"
                       {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_SMALLER_EQ;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1844 "src/main.tab.cpp"
    break;

  case 43:
#line 334 "src/main.y"
                      {
    TreeNode *node=new TreeNode(yyvsp[-2]->lineno,NODE_OP);
    node->optype=OP_BIGGER_EQ;
    node->addChild(yyvsp[-2]);
	node->addChild(yyvsp[0]);
	yyval=node;
}
#line 1856 "src/main.tab.cpp"
    break;

  case 44:
#line 344 "src/main.y"
                {
	TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_EXPR);
	node->optype=OP_ADD;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval = node;

}
#line 1869 "src/main.tab.cpp"
    break;

  case 45:
#line 352 "src/main.y"
               {
	TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_EXPR);
    node->optype=OP_SUB;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval = node;

}
#line 1882 "src/main.tab.cpp"
    break;

  case 46:
#line 360 "src/main.y"
                {
	TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_EXPR);
    node->optype=OP_MUL; 
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval = node;

}
#line 1895 "src/main.tab.cpp"
    break;

  case 47:
#line 368 "src/main.y"
                {
	TreeNode* node = new TreeNode(yyvsp[-2]->lineno, NODE_EXPR);
    node->optype=OP_DIV; 
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval = node;

}
#line 1908 "src/main.tab.cpp"
    break;

  case 48:
#line 376 "src/main.y"
                   {
    TreeNode *node = new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
    node->optype=OP_MODULA;
    node->addChild(yyvsp[-2]);
    node->addChild(yyvsp[0]);
    yyval=node;
}
#line 1920 "src/main.tab.cpp"
    break;

  case 49:
#line 383 "src/main.y"
          {
	TreeNode* node = new TreeNode(yyvsp[-1]->lineno, NODE_EXPR);
	node->optype=OP_UN;
	node->addSibling(yyvsp[0]);
	yyval = node;
}
#line 1931 "src/main.tab.cpp"
    break;

  case 50:
#line 389 "src/main.y"
         {
	TreeNode* node = new TreeNode(yyvsp[-1]->lineno, NODE_EXPR);     
	node->optype=OP_SUB;
    node->addSibling(yyvsp[0]);
    yyval = node;

}
#line 1943 "src/main.tab.cpp"
    break;

  case 51:
#line 405 "src/main.y"
             {
    yyval = yyvsp[0];
}
#line 1951 "src/main.tab.cpp"
    break;

  case 52:
#line 408 "src/main.y"
          {
    yyval = yyvsp[0];
}
#line 1959 "src/main.tab.cpp"
    break;

  case 53:
#line 411 "src/main.y"
       {
    yyval = yyvsp[0];
}
#line 1967 "src/main.tab.cpp"
    break;

  case 54:
#line 414 "src/main.y"
         {
    yyval = yyvsp[0];
}
#line 1975 "src/main.tab.cpp"
    break;

  case 55:
#line 419 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_INT;}
#line 1981 "src/main.tab.cpp"
    break;

  case 56:
#line 420 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_CHAR;}
#line 1987 "src/main.tab.cpp"
    break;

  case 57:
#line 421 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_BOOL;}
#line 1993 "src/main.tab.cpp"
    break;

  case 58:
#line 422 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_VOID;}
#line 1999 "src/main.tab.cpp"
    break;


#line 2003 "src/main.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 428 "src/main.y"


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
