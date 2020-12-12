#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"

enum NodeType
{
	NODE_PROG,
    NODE_CONST, 
    NODE_VAR,
    NODE_EXPR,
    NODE_TYPE,
	NODE_OP,
	NODE_BOOL,

    NODE_STMT,
    //NODE_PROGRAM,
};

enum OperatorType
{
    OP_EQ,  // ==
	OP_ADD, //+
	OP_SUB, //-
	OP_MUL, //*
	OP_DIV, ///
	OP_UN, //!
	OP_MODULA,//%
	OP_BIGGER,//>
	OP_SMALLER,//<
	OP_SMALLER_EQ,//<=
	OP_BIGGER_EQ,//>=
	OP_AND,//&&
	OP_OR,//||
	OP_UNEQ//!=
};

enum StmtType {
    STMT_SKIP,
    STMT_DECL,	
	STMT_IF,	//if
	STMT_WHILE,	//while
	STMT_FOR,	//for
	STMT_FOR_BOOL,//for中的判断语句
    STMT_ASSIGN,//=
    STMT_PRINTF,//printf
    STMT_SCANF,//scanf
	STMT_SELF,//++ --
}
;

enum VarType{
    VAR_INTEGER,
    VAR_VOID,
    //VAR_FLOAT,
    VAR_CHAR,
    VAR_STRING,
    VAR_ID
};

enum ConstType{
    CON_INT,
    CON_CHAR,
    CON_STRING
};



struct TreeNode {
public:
    int nodeID;  // 用于作业的序号输出
    int lineno;
    NodeType nodeType;
    
    VarType vartype;
    ConstType contype;

    TreeNode* child = nullptr;
    TreeNode* sibling = nullptr;

    void addChild(TreeNode*);
    void addSibling(TreeNode*);
    
    void printNodeInfo();
    void printChildrenId();

    void printAST(); // 先输出自己 + 孩子们的id；再依次让每个孩子输出AST。
    void printSpecialInfo();

    void genNodeId(int& num);

//public:
    OperatorType optype;  // 如果是表达式
    Type* type;  // 变量、类型、表达式结点，有类型。
    StmtType stype;
    int int_val;
    char ch_val;
    bool b_val;
    string str_val;
    string var_name;
public:
    static string nodeType2String (NodeType type);
    static string opType2String (OperatorType type);
    static string sType2String (StmtType type);

public:
    TreeNode(int lineno, NodeType type);
};

#endif
