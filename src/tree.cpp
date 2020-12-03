#include "tree.h"
void TreeNode::addChild(TreeNode* child) {
	if(this->child == nullptr) 
		this->child = child;
    else 
		this->child->addSibling(child);
}

void TreeNode::addSibling(TreeNode* sibling){
	if(this->sibling == nullptr) 
		this->sibling = sibling;
    else 
		this->sibling->addSibling(sibling);
}

TreeNode::TreeNode(int lineno, NodeType type) {
	this->lineno=lineno;
	this->nodeType=type;
}

void TreeNode::genNodeId(int& num) {

	this->nodeID = num;
	num++;
   	if(this->child != nullptr) 
   	{
    	this->child->genNodeId(num);
   	}
   	if(this->sibling != nullptr)
   	{
       this->sibling->genNodeId(num);
   	}

}

void TreeNode::printNodeInfo() {
	//cout<<this->lineno<<"\t";
	string nodetype;
    switch(this->nodeType)
    {
    case NODE_CONST: nodetype = "const"; break;
    case NODE_BOOL: nodetype = "bool"; break;
    case NODE_VAR: nodetype = "variable"; break;
    case NODE_EXPR: nodetype = "expression"; break;
    case NODE_TYPE: nodetype = "type"; break;
    case NODE_STMT: nodetype = "statement"; break;
    case NODE_PROG: nodetype = "program"; break;
    case NODE_OP: nodetype = "operator"; break;
    }
    cout<<"  "<<this->nodeID<<"\t"<<nodetype;
}

void TreeNode::printChildrenId() {


}

void TreeNode::printAST() {

	 //cout<<this->nodeID;
     //printSpecialInfo();
	 //cout<<"\t"<<"child:";
     //printChildrenId();
	
	printNodeInfo();
	cout<<"\t"<<"child:";
    TreeNode* ptr = this->child;
    while(ptr != nullptr)
    {
        cout<<"\t"<<ptr->nodeID;
        ptr = ptr->sibling;
    }
    //printNodeConnection();
    cout<<endl;
    if(this->sibling != nullptr) this->sibling->printAST();
    if(this->child != nullptr) this->child->printAST();

}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
		case NODE_PROG:cout<<"program";
			break;
        case NODE_CONST:cout<<"const";
            break;
        case NODE_VAR:cout<<"variable";
            break;
        case NODE_EXPR:cout<<"expression";
            break;
        case NODE_STMT:cout<<"statement";
            break;
        case NODE_TYPE:cout<<"type";
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
