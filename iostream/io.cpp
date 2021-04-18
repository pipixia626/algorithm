#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
  
//   输入数据包括多组。
// 每组数据一行,每行的第一个整数为整数的个数n(1 <= n <= 100), n为0的时候结束输入。
// 接下来n个正整数,即需要求和的每个正整数。
//   int n;
//   while(cin>>n){
//       if(n==0)break;
//       int a,sum=0;
//       for(int i=0;i<n;i++){
//           cin>>a;
//           sum+=a;
//       }
//       cout<<sum<<endl;
//   }

//输入包括两个正整数a,b,输入数据包括多组。
//cin>>a>>b;

//输入数据有多组，每行表示一组数据
//每行不定有n个整数，空格隔开

// int n;
// int sum=0;
// while(cin>>n){
//     sum+=n;
//     if(cin.get()=='\n'){
//      //do
//     }
// }


// 输入有两行，第一行n
// 第二行是n个空格隔开的字符串
// 输出一行排序后的字符串，空格隔开，无结尾空格

// int n;
// cin>>n;
// vector<string>s;
// for(int i=0;i<n;i++){
//     string str;
//     cin>>str;
//   s.push_back(str);

// }

// for(int i=0;i<n;i++){
//     cout<<s[i]<<" ";
// }

// return 0;


//多个测试用例，每个测试用例一行
//每行通过，隔开，有n个字符
   int n;
   cin>>n;
   string s;
   vector<string> str;
   while (n--)
   {
       cin>>s;
       str.push_back(s);
       /* code */
   }
   for(auto it=str.begin();it!=str.end();it++){
       cout<<","<<*it;
   }
    int x=3.14159265;
    cout<<setprecision(2)<<x<<endl;
    
   cin>>s;
}