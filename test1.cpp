#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    vector<int>vec(n+1);
    int w[n+1];
    vec[0]=-1,w[0]=-1;
    int res[n+1];
    for(int i=1;i<=n;i++){
        cin>>temp;
        vec.push_back(temp);
    }
    for(int i=1;i<=n;i++){
        cin>>temp;
        w[i]=temp;
    }
    vector<int>::iterator it;
      
        for(int i=1;i<=n;i++){
             int sumleft=0,sumright=0;
            for(it=vec.begin()+1;it!=vec.begin()+w[i];it++){
             sumleft+=*it;
            }
             for(it=vec.begin()+w[i]+1;it!=vec.end();it++){
             sumright+=*it;
            }
             vec[w[i]]=0;
            w[i]=sumleft>sumright?sumleft:sumright;
          
        }
    
    for(int i=1;i<=n;i++){
        cout<<w[i]<<endl;
       }
    return 0;
     }
    
    
   