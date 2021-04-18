#include<iostream>
#include<vector>
using namespace std;
class QuickSort{
    
    public:
    vector<int>Mysort(vector<int>&arr){
        quickSort(arr,0,arr.size()-1);
        return arr;
    }
    void quickSort(vector<int>&arr,int left,int right){
       if(left<right){
           int point=partiton(arr,left,right);
           quickSort(arr,left,point-1);
           quickSort(arr,point+1,right);
       }
    }
    int partiton(vector<int>&arr,int left,int right){
       int first=arr[left];
       while (left<right)
       {
           while ((left<right)&&arr[right]>=first)
           {
               right--;
           }
           swap(arr,left,right);
           while ((left<right)&&arr[left]<=first)
           {
               left--;
           }
           swap(arr,left,right);
           
       }
       return left;
       
    }
    void swap(vector<int>&arr,int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        nums.push_back(input);
    }
    QuickSort q;
    q.Mysort(nums);
    
}