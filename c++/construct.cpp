/*
c++中对象都是先构造成员变量，再调用自身的构造函数；故父类成员变量首先被构造，
然后调用父类的构造函数，再构造子类的成员变量，最后调用子类的构造函数。
对象析构时与构造顺序相反，子类先调用自身的析构函数，
再调用子类成员变量的析构函数，再调用父类的析构函数，再析构父类的成员变量。
*/

#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am A"<<endl;
        test();
    }
    virtual void test(){
        cout<<"A vir"<<endl;
    }
    ~A(){
        cout<<" A leave"<<endl;
        test();
    }

};
class B:A{
    public:
    B(){
        cout<<"I am B"<<endl;test();
    }
    virtual void test(){
        cout<<"B vir"<<endl;
    }
    ~B(){
        cout<<"B leave"<<endl;test();
    }
};
int main(){
  
    B*a= new B();
    delete a;
}