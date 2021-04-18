#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string str1,str2;
    cin>>str1>>str2;
    int result=0;
    //str1是小美朋友（n)，str2确认是不是小美朋友(m)
    int res[m];
    for(int i=0;i<m;i++){
        res[i]=str1.find_first_of(str2[i])+1;
        cout<<str1<<endl;
        str1[res[i]-1]='0';
    }
    
    for(int i=0;i<m;i++){
        cout<<res[i]<<" ";
    }
    for(int i=0;i<m;i++){
        if((i<m-1)&&(res[i]>res[i+1]))
        {
            cout<<"No";
            return 0;}
        result+=res[i];
    }
    cout<<"Yes"<< endl;
    cout<<result;
    return 0;
    
}