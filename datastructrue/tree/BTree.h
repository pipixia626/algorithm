#pragma once

class BiNode{
    public:
    char data;
    struct BiNode*lchild,*rchild;
};

class BiTree{
    private:

    BiNode*root;
    int height;
    BiNode*Create(BiNode*Tree);
    void Release(BiNode*Tree);
    void PreOrder(BiNode*Tree);
    void InOrder(BiNode*Tree);
    void PostOrder(BiNode*Tree);
    void get_Height(BiNode*Tree,int height);//求树的高度
    void visit(BiNode* Node);//访问节点
    public:

    BiTree(){Create(root);height=0;}
    ~BiTree();
    /*  假如以L、D、R分别表示遍历左子树、访问根节点和遍历右子树，
    则可以有DLR、LDR、LRD、DRL、RDL、RLD这6种遍历二叉树的方案。
    若限定先左后右，则只有前3种情况，
    分别称之为先（根）序遍历、中（根）序遍历和后（根）序遍历
    */
    
    void preOrder();//前序遍历二叉树
    void preOrder_stack();//(使用栈的非递归方法)
    void inOrder();//中序遍历二叉树
    void inOrder_stack();//(使用栈的非递归方法)
    void postOrder(); //后序遍历二叉树(递归方法)
    void postOrder_stack();  //后序遍历二叉树(使用栈的非递归方法)
    void levelOrder(); //层序遍历二叉树
    
    int getHeight();//求树的高度
    //求两个节点的最大公共祖先
    void ancestor(char A,char B);
};