#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second)return a.first>b.first;
    return a.second<b.second;
}
int main(){
    int n,m;
    cin>>n>>m;
    pair<int,int>p;
    vector<pair<int,int>> order;
    int i=1;
    while(n--){
        cin>>p.first>>p.second;
        order.push_back(make_pair(i++,p.first+p.second*2));
    }
    sort(order.begin(),order.end(),cmp);

    for(int i=order.size()-1;i>order.size()-m-1;i--){
        cout<<order[i].first<<" ";
      }
    return 0;
}