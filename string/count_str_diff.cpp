#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
/*计算一个字符串不同字符的数目
*/
using namespace std;
int main(){
     
     string str;
     cin>>str;
     set<int>str_store;
     int count=0,i=0;
    for(int i=0;i<str.length();i++){
        str_store.insert(str[i]);
    }
     cout<<str_store.size()<<endl;
     return 0;

}