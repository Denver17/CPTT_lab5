%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}

%token PRINTF SCANF

%token T_CHAR T_INT T_STRING T_BOOL 

%token ASSIGN 

%token SEMICOLON

%token IDENTIFIER INTEGER CHAR BOOL STRING

%token TRUE FALSE

%token IF ELSE WHILE

%left EQ

%left ADD SUB 

%left MUL DIV

%right UN


%token LPAREN RPAREN LSB RSB LBRACE RBRACE

%%


program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}
;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| declaration {$$ = $1;}
| if_statement {$$=$1;}
| while_statement {$$=$1;}
| LBRACE statements RBRACE {$$=$2;}
;

statement_block
    : LBRACE statements RBRACE
    ;


if_statement
:  IF bool_statement statement ELSE statement{
	TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
    node->stype=STMT_IF;
    node->addChild($2);
    node->addChild($3);
    node->addChild($5);
    $$=node;
}
;

while_statement
: WHILE bool_statement statement {
    TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
    node->stype=STMT_WHILE;
    node->addChild($2);
    node->addChild($3);
    $$=node;
}
;

bool_statement
:  LPAREN bool_expr RPAREN {$$=$2;}
;

printf
: PRINTF LPAREN expr RPAREN {
    TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
    node->stmtType=STMT_PRINTF;
    node->addChild($3);
    $$=node;
}
;
scanf
: SCANF LPAREN expr RPAREN {
    TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
    node->stmtType=STMT_SCANF;
    node->addChild($3);
    $$=node;
}
;


declaration
: T IDENTIFIER ASSIGN expr SEMICOLON{  // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    $$ = node;   
} 
| T IDENTIFIER SEMICOLON{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;   
}
| IDENTIFIER ASSIGN expr SEMICOLON{
	TreeNode *node=new TreeNode($1->lineno,NODE_STMT);
    node->stype=STMT_DECL;
    node->addChild($1);
    node->addChild($3);
    $$=node;  
}
;

bool_expr
  : TRUE {$$=$1;}
  | FALSE {$$=$1;}
  | expr EQ expr {
     TreeNode *node=new TreeNode($1->lineno,NODE_OP);
     node->optype=OP_EQ;
     node->addChild($1);
     node->addChild($3);
     $$=node;
    }
  | UN bool_expr {
    TreeNode *node=new TreeNode($1->lineno,NODE_OP);
    node->optype=OP_UN;
    node->addChild($2);
    $$=node;
}
;

expr
: expr ADD expr {
	TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
	node->optype=OP_ADD;
    node->addChild($1);
    node->addChild($3);
    $$ = node;

}
|expr SUB expr {
	TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->optype=OP_SUB;
    node->addChild($1);
    node->addChild($3);
    $$ = node;

}
| expr MUL expr {
	TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->optype=OP_MUL; 
    node->addChild($1);
    node->addChild($3);
    $$ = node;

}
| expr DIV expr {
	TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->optype=OP_DIV; 
    node->addChild($1);
    node->addChild($3);
    $$ = node;

}
| UN expr {
	TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
	node->optype=OP_UN;
	node->addSibling($2);
	$$ = node;
}
| expr EQ expr {
	TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
	node->optype=OP_EQ;
	node->addChild($1);
	node->addChild($3);
	$$ = node;
}
| IDENTIFIER {
    $$ = $1;
}
| INTEGER {
    $$ = $1;
}
| CHAR {
    $$ = $1;
}
| STRING {
    $$ = $1;
}
;

T: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
;


 

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
