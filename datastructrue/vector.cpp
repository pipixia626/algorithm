#include<vector>
#include<iostream>
int main(){
   //初始化
   std::vector<int> a(10);
   std::vector<int> b(10,1);
   std::vector<int> c(b);
   std::vector<int> d(b.begin(),b.begin()+3);
   //函数

    a.assign(4,2);
    //返回最后一个元素
    int e=a.back();
    //返回第一个元素
    e=a.front();
    //删除a中第2个元素到第三个元素
    a.erase(a.begin()+1,a.begin()+3);
    //插入:效率很低，理论上是禁止的
    a.insert(a.begin()+1,3,5);
    //重新构建size
    a.resize(10);
    //.empty()
    //.capacity()
    //.pop 
    //.push_back
    a.swap(b);

   //遍历
   for(std::vector<int>:: iterator it=a.begin();it!=a.end();it++)
   {
            std::cout<<*it<<std::endl;
   }
   //把a中的从a.begin()（包括它）到a.end()的元素复制到b中，
   //从b.begin()+1的位置（包括它）开始复制，覆盖掉原有元素
   //copy(a.begin(),a.end()+1,b.begin()+1); 
   //sort(a.begin(),a.end());
   //sort(a.begin(),a.end(,std::greater<int>());//less,less_qual
   //
}