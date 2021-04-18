#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode*next;
    ListNode():next(nullptr),val(0){}
    ListNode(int _val):next(nullptr),val(_val){}

};
class Reverse{
    public:
    ListNode*reveseKGroup(ListNode*head,int k){
        if(k<2){
            return head;
        }
        int i=1,count=1;
        ListNode*output=head;
        //pr1:前一段结束位置节点
        //pr2:当前这段结束位置节点
        ListNode*pr1=nullptr;
        ListNode*pr2=nullptr;
        ListNode*left;
        while (head)
        {
            if(i==1){
                left=head;
                pr2=left;
            }
            head=head->next;
            i++;
            count++;
            //因为先head=head->next；所以需要判断head，否则可能越界
            if(head==nullptr)break;
            if(count==k)output=head;
            //k长度反转
            if(i==k){
                
            }
        }
        
    }
};