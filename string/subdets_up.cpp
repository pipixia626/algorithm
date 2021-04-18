/*
给你一个整数数组 nums ，其中可能包含重复元素，请你返回该数组所有可能的子集（幂集）。
解集 不能 包含重复的子集。返回的解集中，子集可以按 任意顺序 排列。
输入：nums = [1,2,2]
输出：[[],[1],[1,2],[1,2,2],[2],[2,2]]
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<vector<int>>subsetsWithUp(vector<int>&nums){
      vector<vector<int>>res;
      vector<int>temp;
      if(nums.empty()) return res;
      sort(nums.begin(),nums.end());
      helper(res,temp,nums,0);
      return res;
      

    }

    void helper(vector<vector<int>>&res,vector<int>&temp,vector<int>&nums,int start){
        if(start>nums.size())return;

        res.push_back(temp);
        for(int i=start;i<nums.size();i++){
            //去重
            if(i!=start&&nums[i]==nums[i-1])
            continue;
            temp.push_back(nums[i]);
            helper(res,temp,nums,i+1);
            temp.pop_back();
        }
    }
};

int main(){
    int n;
    vector<int>nums;
    cin>>n;
    for(int i=0;i<n;i++){
     int temp;
     cin>>temp;
     nums.push_back(temp);
    }
     for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    vector<vector<int>>vec;
    Solution s;
    vec=s.subsetsWithUp(nums);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
    }
    return 0;

}