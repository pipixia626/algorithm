#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int nums[n][m];
     
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp;
            cin>>temp;
            nums[i][j]=temp;
        }
    }

    //转置O(n)存储空间
    

    // int res[m][n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         res[i][j]=nums[j][i];
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //        cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
     

    //O(1)存储空间（n==m)

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        nums[i][j]=nums[j][i];
    }

    

}