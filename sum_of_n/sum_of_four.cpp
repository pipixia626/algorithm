#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    //暴力
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
         vector<vector<int>>res;
         if(nums.size()<4)
         return res;

         int a,b,c,d,_size=nums.size();
         for(a=0;a<=_size-4;a++){
             if(a>0&&nums[a]==nums[a-1])continue;
             for(b=a+1;b<=_size-3;b++){
                 if((b>a+1&&nums[b]==nums[b-1]))continue;
                 c=b+1,d=_size-1;
                 while(c<d){
                     if(nums[a]+nums[b]+nums[c]+nums[d]<target)
                     c++;
                     else if(nums[a]+nums[b]+nums[c]+nums[d]>target)
                     d--;
                     else{
                     res.push_back({nums[a],nums[b],nums[c],nums[d]});
                     while((c<d)&&(nums[c+1]==nums[c]))
                     c++;
                     while((c<d)&&(nums[d-1]==nums[d]))
                     d--;
                     c++;
                     d--;
                     }
                 }
             }
         }
         return res;
    }
    //剪枝
    vector<vector<int>> fourSum_cut(vector<int>& nums, int target) {
         vector<vector<int>>res;
         int n=nums.size();
         if(n<4) return res;

         sort(nums.begin(),nums.end());

         for(int i=0;i<n-3;i++){
             if(i>0&&nums[i]==nums[i-1])continue;
             //剪枝
             if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)break;
             //剪枝
             if(nums[i]+nums[n-1]+nums[n-2]+nums[n-3]<target)break;

         
            for(int j=i+1;j<n-2;j++){
                 if(j>i+1&&nums[j]==nums[j-1])continue;
                 //剪枝
                 if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target)break;
                 //剪枝
                 if(nums[i]+nums[j]+nums[n-1]+nums[n-2]<target)continue;
                 //通过双指针获取第三第四个数
                 int left=j+1,right=n-1;
                 while(left<right){
                     if(nums[left]+nums[right]<target-nums[i]-nums[j])
                     left++;
                     if(nums[left]+nums[right]>target-nums[i]-nums[j])
                     right--;
                     else{
                         res.push_back({nums[i],nums[j],nums[left],nums[right]});
                         while(left<right&&nums[left]==nums[left+1])
                         left++;
                         while(left<right&&nums[right]==nums[right-1])
                         right--;
                     }
                 }
            }
            return res;


         }
    }
};