#include<iostream>
#include<vector>
using namespace std;


bool match(int i,int j){
    int rever=0;
    while(j){
        rever=rever*10+j%10;
        j/=10;
    }
    return i==rever;

}
int main(){

    int n,count=0;
    vector<int>ans;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(match(i,i*4)){
            ++count;
            ans.push_back(i);
        }
    }
   cout<<count<<endl;
   for(auto x:ans){
       cout<<x<<" "<<4*x<<endl;

   }
   return 0;
}