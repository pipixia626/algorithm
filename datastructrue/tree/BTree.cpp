#include"BTree.h"
#include<queue>
#include<stack>
#include<vector>
#include<iostream>
using namespace std;

BiNode*BiTree::Create(BiNode*Tree){
     char ch;
     cin>>ch;
     if(ch=='#')Tree=nullptr;
     else{
         Tree=new BiNode();
         Tree->data=ch;
         Tree->lchild=Create(Tree->lchild);
         Tree->rchild=Create(Tree->rchild);
     }
     return Tree;
};

void BiTree::preOrder(){
    PreOrder(root);
}
void BiTree::inOrder(){
    InOrder(root);
}
void BiTree::postOrder(){
    PostOrder(root);
}
void BiTree::PreOrder(BiNode*Tree){
   if(Tree){
       visit(Tree);
       PreOrder(Tree->lchild);
       PreOrder(Tree->rchild);
   }
}
void BiTree::InOrder(BiNode*Tree){
   if(Tree){
       PreOrder(Tree->lchild);
       visit(Tree);
       PreOrder(Tree->rchild);
   }
}

void BiTree::PostOrder(BiNode*Tree){
    if(Tree){
       PreOrder(Tree->lchild);
       PreOrder(Tree->rchild);
       visit(Tree);
   }
}
void BiTree::levelOrder(){
  if(root==nullptr) return ;
   queue<BiNode*>q;
   q.push(root);
   while (!q.empty())
   {
       BiNode*Node;
       Node=q.front(); 
       q.pop();
       visit(Node);
       if(Node->lchild!=nullptr)q.push(Node->lchild);
       if(Node->rchild!=nullptr)q.push(Node->rchild);
   }
   cout<<endl;
   
}
void BiTree::preOrder_stack(){
    
}
void BiTree::inOrder_stack(){

}
void BiTree::postOrder_stack(){
    BiNode*prev=root;
    BiNode*cur=nullptr;
    stack<BiNode*>stack;
    while (prev!=nullptr||!stack.empty())
    { 
        if(prev){
            //把左节点放进去
          stack.push(prev);
          prev=prev->lchild;
        }
        else{
           prev=stack.top();
           //如果右子树没有遍历，遍历右子树
           if(prev->rchild!=nullptr&&prev->rchild!=cur){
               prev=prev->rchild;
               stack.push(prev);
               prev=prev->lchild;
           }
           //遍历根节点
           else{
               prev=stack.top();
               stack.pop();
               visit(prev);
               //更新最近遍历的节点
               cur=prev;
               //将遍历后的节点设为null,进行下一个节点的遍历
               prev=nullptr;
           }
        }
        
    }
    
}

void visit(BiNode* Node){
    cout<<Node->data<<endl;
    cout<<"高度为"<<Node->data;
}



