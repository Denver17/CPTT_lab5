#include "tree.h"
void TreeNode::addChild(TreeNode* child) {
	TreeNode* tmp;
	if(child!=NULL)
	{
		if(this->child==nullptr)
			this->child=child;
		else
		{
			tmp=this->child;
			while(tmp->sibling!=nullptr)
			{
				tmp=tmp->sibling;
			}
			tmp->sibling=child;
		}
	}
}

void TreeNode::addSibling(TreeNode* sibling){
	TreeNode* temp;
	if(sibling!=NULL)
	{
		temp=this;
		while(temp->sibling!=nullptr)
		{
			temp=temp->sibling;
		}
		temp->sibling=sibling;
	}
}

TreeNode::TreeNode(int lineno, NodeType type) {
	this->lineno=lineno;
	this->nodeType=type;
}

void TreeNode::genNodeId() {
	TreeNode* temp;

	if(this->child!=nullptr)
	{
		;
	}
}

void TreeNode::printNodeInfo() {
	cout<<this->lineno<<"\t";
}

void TreeNode::printChildrenId() {
	TreeNode* temp;
	temp=this->child;
	if(temp==nullptr)
	{
		cout<<" ";
	}
	else
	{
		cout<<temp->nodeID<<" ";
		while(temp->sibling!=nullptr)
		{
			temp=temp->sibling;
			cout<<temp->nodeID<<" ";
		}
	}
}

void TreeNode::printAST() {
	TreeNode* ast_temp;
	
	cout<<this->nodeID;
	printSpecialInfo();
	cout<<"\t"<<"child:";
	printChildrenId();

	ast_temp=this;
	if(ast_temp->child!=nullptr)
	{
		ast_temp=ast_temp->child;
		ast_temp->printAST();
		while(ast_temp->sibling!=nullptr)
		{
			ast_temp=ast_temp->sibling;
			ast_temp->printAST();
		}
	}

	 //cout<<this->nodeID;
     //printSpecialInfo();
	 //cout<<"\t"<<"child:";
     //printChildrenId();

}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
		case NODE_PROGRAM:cout<<"program"<<endl;
			break;
        case NODE_CONST:cout<<"const"<<endl;
            break;
        case NODE_VAR:cout<<"variable"<<endl;
            break;
        case NODE_EXPR:cout<<"expression"<<endl;
            break;
        case NODE_STMT:cout<<"statement"<<endl;
            break;
        case NODE_TYPE:cout<<"type"<<endl;
            break;
        default:
            break;
    }
}

string TreeNode::sType2String(StmtType type) {
    return "?";
}


string TreeNode::nodeType2String (NodeType type){
    return "<>";
}
