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
    IDENTIFIER = 272,
    INTEGER = 273,
    CHAR = 274,
    BOOL = 275,
    STRING = 276,
    AND = 277,
    OR = 278,
    TRUE = 279,
    FALSE = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    FOR = 284,
    EQ = 285,
    UNEQ = 286,
    BIGGER = 287,
    SMALLER = 288,
    BIGGER_EQ = 289,
    SMALLER_EQ = 290,
    ADD = 291,
    SUB = 292,
    MUL = 293,
    DIV = 294,
    MODULA = 295,
    UN = 296,
    LPAREN = 297,
    RPAREN = 298,
    LSB = 299,
    RSB = 300,
    LBRACE = 301,
    RBRACE = 302,
    SEMICOLON = 303,
    COMMA = 304,
    LOWER_THEN_ELSE = 305
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
