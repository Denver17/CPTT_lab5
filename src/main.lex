%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
int lineno=1;
%}
BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

INTEGER [0-9]+

CHAR \'.?\'
STRING \".+\"



RETURN return
WHILE while
IF if
ELSE else
FOR for

LPAREN "("
RPAREN ")"
LSB "["
RSB "]"
LBRACE "{"
RBRACE "}"



IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*
%%

{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */


"int" return T_INT;
"bool" return T_BOOL;
"char" return T_CHAR;

"if" return IF;
"else" return ELSE;
"while" return WHILE;

"=" return ASSIGN;

"==" return EQ;

"+" return ADD;
"-" return SUB;
"*" return MUL;
"/"	return DIV;

"(" return LPAREN;
")" return RPAREN;
"[" return LSB;
"]" return RSB;
"{" return LBRACE;
"}" return RBRACE;

"!" return UN;


";" return  SEMICOLON;


"true" {
    TreeNode *node = new TreeNode(lineno,NODE_BOOL);
    node->b_val = true;
    yylval = node;
    return TRUE;
}
"false" {
    TreeNode *node = new TreeNode(lineno,NODE_BOOL);
    node->b_val = false;
    yylval = node;
    return FALSE;
}


{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_INT;
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}



{CHAR} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_CHAR;
    node->ch_val = yytext[1];
    yylval = node;
    return CHAR;
}



{IDENTIFIER} {
    TreeNode* node = new TreeNode(lineno, NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return IDENTIFIER;
}

{WHILTESPACE} /* do nothing */

{EOL} lineno++;


%%
