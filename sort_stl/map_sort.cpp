#include<map>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp_by_value(const pair<string,int>p1,const pair<string,int>p2){
    return p1.second<p2.second;
}
int main(){
  //让map中的元素按照string长度从大到小排序
  map<string,int,greater<string>>m;
  m["Wang"]=100;
  m["Zhang"]=90;
  m["Li"]=80;
  map<string,int>::iterator it=m.begin();
  for(it;it!=m.end();it++){
      cout<<"让map中的元素按照string长度从大到小排序"<<endl;
      cout<<it->first<<" "<<it->second<<endl;
  } 
  //让map中的元素按照value值从大到小排序
  map<string,int>m1;
  m1["Wang"]=100;
  m1["Zhang"]=90;
  m1["Li"]=80;
  vector<pair<string,int> >vec(m1.begin(),m1.end());
  sort(vec.begin(),vec.end(),cmp_by_value);
 
  for(int i=0;i<vec.size();i++){
    //   cout<<"让map中的元素按照key值从大到小排序"<<endl;
      cout<<vec[i].first<<" "<<vec[i].second<<endl;
  } 

  return 0;
}