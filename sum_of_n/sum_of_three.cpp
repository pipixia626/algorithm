/*
同理 ，i left ,right
*/
/*给你一个包含 n 个整数的数组 nums，
判断 nums 中是否存在三个元素 a，b，c ，
使得 a + b + c = 0 ？
请你找出所有和为 0 且不重复的三元组。
注意：答案中不可以包含重复的三元组。
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// bool cmp(int num_A,int num_B){
//     return num_A<num_B;
// }
class Sum_Three{
   private:
   vector<vector<int>>res;

   public:
   
    bool threeSum(vector<int>& nums){
        vector<vector<int>>res;
        vector<int>temp;
       if(nums.size()<3) return false;

       sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=0;i<n;i++){
           if(nums[i]>0)break;
           if(i>0&&nums[i]==nums[i-1])continue;
           int left=i+1,right=n-1;
           while (left<right)
           {
               int sum=nums[i]+nums[left]+nums[right];
               if(sum==0){
                   while(left<right&&nums[left]==nums[left+1])left++;
                   while(left<right&&nums[right]==nums[right])right++;
                   temp.push_back(nums[i]);
                   temp.push_back(nums[left]);
                   temp.push_back(nums[right]);
                   temp.clear();
                   left++;
                   right--;
                   
               }
               else if(sum>0){
                   right--;
               }
               else{
                   left++;
               }
           }
           
       }
       this->res=res;
   }
    
    

};

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int temp=0;
        cin>>temp;
        nums.push_back(temp);
    }
    Sum_Three s;
    s.threeSum(nums);
    
}