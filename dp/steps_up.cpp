//上台阶
//dp[i]=dp[i-1]+dp[i-2];

#include<iostream>
#include<vector>
using namespace std;
int up_steps_cursion(int n){
     
     if(n==1)return 1;
     else if(n==2)return 2;
     else
     return up_steps_cursion(n-1)+up_steps_cursion(n-2);
}
int up_steps_dp(int n){
    if(n<=1)return n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<"上台阶的方法有:"<<endl;
    cout<<up_steps_cursion(n)<<endl;
    cout<<up_steps_dp(n)<<endl;
}