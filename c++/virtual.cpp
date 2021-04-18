/*用父类型的指针指向子类型的实例，
然后通过父类的指针调用了实际子类的成员函数，
这种技术可以让父类的指针有“多种形态”
C++的编译器是保证虚函数表的指针存在对象实例中最前面的位置
为了保证取到虚函数表的最高性能
通过对象实例的地址得到这张虚函数表，然后就可以遍历其中函数指针
*/

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void f(){cout<<"Base::f"<<endl;}
    virtual void g(){cout<<"Base::g"<<endl;}
    virtual void h(){cout<<"Base::h"<<endl;}

};
