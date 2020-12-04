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
    GUIDE = 261,
    T_CHAR = 262,
    T_INT = 263,
    T_STRING = 264,
    T_BOOL = 265,
    T_VOID = 266,
    ASSIGN = 267,
    ADD_ASSIGN = 268,
    SUB_ASSIGN = 269,
    SELF_ADD = 270,
    SELF_SUB = 271,
    SEMICOLON = 272,
    COMMA = 273,
    IDENTIFIER = 274,
    INTEGER = 275,
    CHAR = 276,
    BOOL = 277,
    STRING = 278,
    AND = 279,
    OR = 280,
    TRUE = 281,
    FALSE = 282,
    IF = 283,
    ELSE = 284,
    WHILE = 285,
    FOR = 286,
    EQ = 287,
    UNEQ = 288,
    BIGGER = 289,
    SMALLER = 290,
    BIGGER_EQ = 291,
    SMALLER_EQ = 292,
    ADD = 293,
    SUB = 294,
    MUL = 295,
    DIV = 296,
    MODULA = 297,
    UN = 298,
    LOWER_THEN_ELSE = 299,
    LPAREN = 300,
    RPAREN = 301,
    LSB = 302,
    RSB = 303,
    LBRACE = 304,
    RBRACE = 305
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
