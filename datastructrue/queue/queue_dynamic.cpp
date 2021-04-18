#include<iostream>
using namespace std;
struct Node{
    int value;
    Node*next;
    Node():value(0),next(nullptr){};
};
class Queue{
 
 public:
       Queue();
       ~Queue();
        bool isEmpty();
		void Enqueue(int x);
		bool Dequeue(int &x);
		void DisplayQueue();
        int getFront();
 private:
        
        Node*front;
        Node*rear;
        int count;
};
Queue::Queue(){
    front=rear=nullptr;
    count=0;
}
Queue::~Queue(){
    int value;
    while (!isEmpty())
    {
      Dequeue(value);   
    }
    
}
bool Queue::isEmpty() 
{
	if (count)
		return false;
	else 
		return true;
}
void Queue::Enqueue(int x){
    Node* cur=new Node;
    cur->next=nullptr;
    cur->value=x;
    if(isEmpty()){
        front=cur;
        rear=cur;
    }
    else{
        rear->next=cur;
        rear=cur;
    }
    count++;
}

bool Queue::Dequeue(int&x){
    if(isEmpty())return false;
    else{
        x=front->value;
        Node*pNext=front->next;
        delete front;
        front=pNext;
        count--;
        return true;
    }
    return true;
}