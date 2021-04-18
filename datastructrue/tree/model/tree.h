template<class DataType>
struct BiNode{
    DataType data;
    BiNode<DataType>*lchild,*rchild;
};

template<class DataType>
class BiTree{
   
    private:
    BiNode<DataType>*root;
    BiNode<DataType>*Create(BiNode<DataType>*Tree);
    void Release(BiNode<DataType> *Tree);
    void PreOrder(BiNode<DataType> *Tree);
    void InOrder(BiNode<DataType> *Tree);
    void PostOrder(BiNode<DataType> *Tree);

    public:
    
    BiTree(){root=Create(root);}
    ~BiTre(){Release(root);}
    void PreOrder(){PreOrder(root);}    //前序遍历
    void InOrder(){InOrder(root);}      //中序遍历
    void PostOrder(){PostOrder(root);}  //后序遍历

};
template<class DataType>
BiNode<DataType>*BiTree<DataType>::Create(BiNode<Data Type>*Tree){
    DataType data;
    cin>>data;
    if(data=='#')Tree=nullptr;
    else{
        Tree=new BiNode(DataType);
        Tree->data=data;
        Tree->lchild=Create(Tree->lchid);
        Tree->rchild=Create(Tree->rchild);
    }
    return Tree;
}


