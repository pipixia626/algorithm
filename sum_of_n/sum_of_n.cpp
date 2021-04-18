/*求n数之和和target对应
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    Solution(vector<int>nums){
       this->nums=nums;
    }
     
     vector<vector<int>> SumOf_N(vector<int>&nums,int target){
         cout<<"sum of n"<<endl;
         int n;
         cin>>n;
         sort(nums.begin(),nums.end());
         return SumOf_N_target(nums,n,0,target);

         
     }
     vector<vector<int>> SumOf_N_target(vector<int>nums,int n ,int start,int target){
        vector<vector<int>>res;
        int length=nums.size();
        if(n<2||length<2){
            return res;
        }
        if(n==2){
            int left=start;
            int right=length-1;
            while (left<right)
            {
                int sum=nums[left]+nums[right];
                if(sum==target){
                    res.push_back({nums[left],nums[right]});
                    left++;
                    right--;
                    while(nums[left]=nums[left-1])left++;
                    while(nums[right]==nums[right+1])right--;

                }
                else if(sum<target) left++;
                else   right--;
            }
            
        }else{
            for(int i=start;i<length;i++){
                int fir=nums[i];
                vector<vector<int>> tempRes= SumOf_N_target(nums,n-1,i+1,target-fir);
                for(vector<int>temp:tempRes){
                    temp.push_back(fir);
                    res.push_back(temp);
                }
                while(i<length&&nums[i]==nums[i+1])i++;
            }
        }
        return res;

     }
     ~Solution(){}

     private:
     vector<int>nums;

};

int main(){
    int n;
    cout<<"input n"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"input these nums"<<endl;
    for(int i=0;i<n;i++){
      int temp=0;
      cin>>temp;
      nums[i]=temp;
    }
    Solution s(nums);
    cout<<"input target"<<endl;
    int targert;
    cin>>targert;
    vector<vector<int>>res=s.SumOf_N(nums,targert);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}