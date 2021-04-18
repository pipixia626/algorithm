#include<iostream>
#include<queue>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        q.push(temp);
    }
    while (!q.empty())
    {
        int temp=q.front();
        q.push(temp);
        q.pop();
        temp=q.front();
        cout<<temp<<" ";
        q.pop();

    }
    return 0;
    
    

}