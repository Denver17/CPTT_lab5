/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
