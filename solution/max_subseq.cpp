/*求数组的最大子序和并返回对应的节点
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Max_Seq{
    private:
    vector<int>nums;
    int res;
    
    public:
    
      void voilence(vector<int>nums){
        if(nums.size()==1) this->res=nums[0];
        int res=nums[0];
        for(int i=0;i<nums.size();i++){
            int temp=0;
            for(int j=i;j<nums.size();j++){
                temp+=nums[j];
                res=max(temp,res);
            }
        }
        this->res=res;
    }

    void  dp(vector<int>nums){
        if(nums.size()==1) this->res=nums[0];
        int pre=0,res=nums[0];
        for(const auto&x:nums){
            pre=max(pre+x,x);
            res=max(pre,res);
        }
        this->res=res;
    }
  

    int devide_conquer(){

    }

    void greedy(vector<int>nums){
         if(nums.size()==1) this->res=nums[0];
       int res=nums[0];
       int sum=0;
       for(const auto&x:nums){
           if(sum>0){
               sum+=x;
           }
           else{
               sum=x;
           }
           res=max(res,sum);
       }
       this->res=res;
    }

};
