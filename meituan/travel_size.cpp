#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,ans=0;
    string S_a,S_b,start="";
    unordered_set<string>::iterator iter;
    cin>>n;
    while(n--){
        cin>>S_a>>S_b;
        if(start==""){
            start=S_a;
        }
        if(S_b==start){
            ++ans;
            start="";
        }
    }
    cout<<ans;
}