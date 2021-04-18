#include<iostream>
using namespace std;
//取模操作
class Queue{
  
  private:
  int front;//头
  int rear;//尾
  int count;//计数
  int maxSize;//最大
  int* values;//数据
  public:
  Queue(int size);
  ~Queue();
  bool isEmpty();
  bool isFull();
  bool Enqueue(int val);
  bool Dequeue(int &x);
  int getFront();
  void DisplayQueue();

};

Queue::Queue(int size){
    values=new int[size];
    maxSize=size;
    front=0;
    rear=-1;
    count=0;
}
Queue::~Queue(){
    delete [] values;
}
bool Queue::isEmpty(){
    return count>0?false:true;
}
bool Queue::isFull(){
    return count==maxSize?true:false;
}
bool Queue::Enqueue(int val){
    if(isFull())return false;
    else{
        rear=(rear+1)%maxSize;
        values[rear]=val;
        count++;
        return true;
    }
    return true;
}
bool Queue::Dequeue(int &x){
    if(isEmpty())return false;
    else{
        x=values[front];
        front=(front+1)%maxSize;
        count--;
        return true;
    }
    return true;
}
int Queue::getFront(){
    return values[front];
}