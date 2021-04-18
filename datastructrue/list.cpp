#include<list>
#include<iostream>
#include<stdio.h>
int main(){
    //push_back
    //push_front
    //pop_back
    //pop_front
    std::list<int> mylist;
    std::list<int>::iterator it1,it2;
    for(int i=1;i<10;i++){
        mylist.push_back(i*10);
    }
    it1=it2=mylist.begin();
    advance(it2,6);
    it2=mylist.erase(it2);
    
    for(std::list<int>::iterator it3=mylist.begin();it3!=mylist.end();it3++){
          std::cout<<*it3;
    }
    // while (*it1)
    // {
    //      std::cout<<*it1;
    //      ++it1;
    //     /* code */
    // }

    return 0;
   

}