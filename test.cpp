#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   
       vector<int>nums(4);
       int target=0;
       nums[0]=2;
       nums[1]=nums[2]=nums[3];
       sort(nums.begin(),nums.end());
       vector<vector<int>>res;
       int a,b,c,d ,size=nums.size();
       for(a=0;a<=size-4;a++){
           if(a>0&&nums[a]==nums[a-1])continue;
           for(b=a+1;b<=size-3;b++){
              //b>a+1保证取到当前这个数
              if(b>a+1&&nums[b]==nums[b-1])continue;
              c=b+1;d=size-1;
              while(c<d){
                  if(nums[a]+nums[b]+nums[c]+nums[d]<target)
                  c++;
                  else if(nums[a]+nums[b]+nums[c]+nums[d]>target)
                  d--;
                  else{
                      res.push_back({nums[a],nums[b],nums[c],nums[d]});
                      while(c<d&&nums[c]==nums[c+1]){
                        c++;
                      }
                      while(c<d&&nums[d]==nums[d-1]){
                        d--;
                      }
                      c++;
                      d--;

                  }
              }
           }
           cout<<res[0][0];
       }
}