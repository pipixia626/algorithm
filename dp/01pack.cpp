#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;//n个商品，背包大小c
    cin>>n>>c;
    int v[n+1],w[n+1];
    for(int i=1;i<n+1;i++){
        cin>>w[i]>>v[i];
    }

    // for(int i=1;i<=n;i++){
    //     cout<<v[i]<<" "<<w[i]<<endl;
    // }
    int dp[n+1][c+1];
    //初始化0行0列
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=c;j++){
        dp[0][j]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(j<w[i])
            dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=c;j++){
            cout<<dp[i][j]<<' ';

        }
        cout<<endl;
    }
    return 0;
}