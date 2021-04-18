#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode*next;
    ListNode(int x):val(x),next(nullptr){}
};

ListNode*getKthFromEnd(ListNode*head,int k){
    ListNode*fast=head;
    ListNode*slow=head;

    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    while(fast!=nullptr){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}


