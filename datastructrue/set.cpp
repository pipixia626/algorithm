#include<set>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){


    set<int>A;
    set<int>B;
    A.insert(1);
    A.insert(2);
    A.insert(3);
    A.insert(4);
    B.insert(1);
    B.insert(2);
    B.insert(4);
    B.insert(5);
    
    set<int> res;
    //交
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(res,res.begin()));
    
    //set_union

    //set_difference
    //
    // for(auto it=A.begin();it!=A.end();it++){

    // }
}