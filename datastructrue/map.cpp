
//   C++Maps是一种关联式容器，包含“关键字/值”对
//      begin()         返回指向map头部的迭代器
//      clear(）        删除所有元素
//      count()         返回指定元素出现的次数
//      empty()         如果map为空则返回true
//      end()           返回指向map末尾的迭代器
//       equal_range()   返回特殊条目的迭代器对
//       erase()         删除一个元素
//      find()          查找一个元素
//      get_allocator()  返回map的配置器
//      insert()        插入元素
//      key_comp()      返回比较元素key的函数
//      lower_bound()   返回键值>=给定元素的第一个位置
//       max_size()      返回可以容纳的最大元素个数
//      rbegin()        返回一个指向map尾部的逆向迭代器
//      rend()          返回一个指向map头部的逆向迭代器
//      size()          返回map中元素的个数
//      swap()           交换两个map
//      upper_bound()    返回键值>给定元素的第一个位置
//      value_comp()     返回比较元素value的函数

#include<map>
#include<unordered_map>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

void map_insert(map<string,string>* mapStudent,string index ,string x){
     
     mapStudent->insert(map<string,string>::value_type(index,x));

}

// int main(int argc,char* argv[]){

//    char temp[32]="";
//    map<string,string>mapS;

//    map_insert(&mapS,"192.168.0.128","wang");
//    map_insert(&mapS,"192.168.200.3","jin");
//    map_insert(&mapS,"192.168.200.33","wangjin");

//    map<string,string>::iterator iter;

//    iter =mapS.find("192.168.200.33");
//    if(iter !=mapS.end()){
//        cout<<"find the element"<<endl;
//        cout<<"It is:"<<iter->second<<endl;

//    }
//    else{
//        cout<<"not find"<<endl;
//    }

int main(int argc,char*argv[]){
    
     vector<int> inorder={9,3,15,20,7};
     unordered_map<int,int> dic;
     for(int i = 0; i < inorder.size(); i++)
             dic[inorder[i]] = i;
    
    for (int i = 0; i < inorder.size(); i++)
    {
        cout<<dic[i]<<" :";

    }
    
    
   return 0;

}

