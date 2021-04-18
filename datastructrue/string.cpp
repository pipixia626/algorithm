#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string s;
    std::string ::iterator p=s.begin();
    s.insert(p,'a');
    s.insert(s.begin(),'c');
    s.insert(s.begin()+2,3,'B');
    
    std::string::iterator a=s.begin();
    std::string::iterator b=s.end();
    //s.insert(pos,s2,pos2,len);//在下标为pos的元素之前插入s2中从下标pos2开始的len个字符
   //s.insert(pos,s2);//在下标为pos的元素之前插入string对象s2
    s.insert(p,a,b);

    //erase()
    int pos=0,len=5;
    s.erase(pos,len);//删除从下标pos开始的len个字符
    std::string s2;

    s.assign(s2,pos,len);//从s2中下标pos开始的len个字符替换s
    //substr(),append(),replace()

    std::string s3=("hello world");
    std::string s2=s.substr(6,5);//world
    s=s.substr(2);//从第二个元素开始拷贝所有
    s=s.substr(6,5);
    //字符串连接
    s.append("!!!");
   
    std::string name("AnnaBelle");
    std::string::size_type pos1=name.find("Belle");
    if(pos1==std::string::npos){
        std::cout<<"not find"<<std::endl;
    }
    else{
        std::cout<<"find it"<<std::endl;
    }
     
     
std::string A ("aBcdef");
std::string B ("AbcdEf");
std::string C ("123456");
std::string D ("123dfg");
//下面是各种比较方法
int m=A.compare (B); //完整的A和B的比较(A>B):1
int n=A.compare(1,5,B,4,2); //"Bcdef"和"Ef"比较(A<B):-1
int q=C.compare(0,3,D,0,3); //"123"和"123"比较:0
//s,replace(pos,len,str)
s.replace(6,5,"nnnn");
s.replace(s2.begin(),s2.end(),"aaaa"); 
//大小写转换
std::string lower="abcdef";
std::string res;
//transform(first,last,result,op);//first是容器的首迭代器，last为容器的末迭代器，result为存放结果的容器，
//op为要进行操作的一元函数对象或sturct、class。
//tolower
std::transform(lower.begin(),lower.end(),lower.begin(),::toupper);
}