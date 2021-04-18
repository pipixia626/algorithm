#include<iostream>
#include<vector>
using namespace std;

struct ListNode{
    int val;
    struct ListNode*next;
    ListNode(int x):
         val(x),next(nullptr){
         }
};

ListNode* insertNode(ListNode*head ,int data){
    ListNode* newNode= new ListNode(data);
    ListNode* p=head;
    if (p==nullptr)
    {
        head=newNode;
    }
    else{
        while(p->next!=nullptr){
            p=p->next;
        }
        p->next=newNode;
    }
    return head;
}


bool deleteNode(ListNode* head,int data){
    ListNode* p=head;
    if(p==nullptr)return false;
    else{
        if(p->val==data){
            head=p->next;
            delete p;
            return true;
        }
        else{
            while (p->next!=nullptr&&p->next->val!=data){
                p=p->next;
            }
            if(p->next==nullptr)
            {
                return false;
            }
            else{
                ListNode* deleteNode=p->next;
                p->next=deleteNode->next;
                delete deleteNode;
                return true;
            }   
        }
    }
}
//反转链表
ListNode*ReverNode(ListNode* head){
    ListNode*cur =head;
    ListNode*prev=nullptr;
    while(cur!=nullptr){
        ListNode*pNext=cur->next;
        cur->next=prev;
        prev=cur;
        cur=pNext;
    }
    return prev;
}
int main(){
   int num;
   cin>>num;
   ListNode*head=new ListNode(num);
   ListNode* p=head;
   
    while (cin>>num)
    {
        ListNode* q= new ListNode(num);
        p->next=q;
        p=p->next;
    }

    ListNode* m=head;
    while (m!=nullptr)
    {
        cout<<m->val<<endl;
        m=m->next;
        /* code */
    }

    return 0;
    
    
}