#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
/*计算字符串的数量并排序
*/
bool cmp(pair<char,int>m1,pair<char,int>m2){
   return m1.second<m2.second;
    
}
int main(){

    string str;
    cin>>str;
    map<char,int,greater<int>>m;
    for(int i=0;i<str.length();i++){
        map<char,int>::iterator it=m.find(str[i]);
        if(it!=m.end()){
            it->second++;
        }
        else{
            m.insert(pair<char,int>(str[i],1));
        }
    }
    vector<pair<char,int> >vec(m.begin(),m.end());
    sort(vec.begin(),vec.end(),cmp);
    for(auto i:vec){
        cout<<i.first<<i.second<<endl;
    }
}