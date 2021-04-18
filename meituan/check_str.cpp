#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check_str(string str){
    
    bool dig_inc=false,aph_inc=false;
    if(isalpha(str[0])==0)return false;
    for(int i=1;i<str.length();i++){
        if(isdigit(str[i])!=0){
            dig_inc=true;
        }
        else if(isalpha(str[i])!=0){
            continue;
        }
        else   return false;
    }
    return dig_inc;
}
int main(){
    int n;
    cin>>n;
    string str;
    vector<string>checks;
    while(n--)
    {   cin>>str;
        checks.push_back(str);
    }
    for(int i=0;i<checks.size();i++){
        if(check_str(checks[i])){
            checks[i]="Accept";
        }else checks[i]="Wrong" ;
    }
    cout<<checks.size()<<endl;
    for(int i=0;i<checks.size();i++){
        cout<<checks[i]<<endl;
    }
    
}