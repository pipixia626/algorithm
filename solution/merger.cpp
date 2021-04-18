/* 给你两个有序整数数组 nums1 和 nums2，

请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
你可以假设 nums1 的空间大小等于 m + n，
这样它就有足够的空间保存来自 nums2 的元素。

*/
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      //法一：合并后排序
      //法二：从后面开始
      int i=nums1.size()-1;
      m--;
      n--;
      while(n>=0){
          while(m>=0&&nums1[m]>nums2[n]){
              swap(nums1[i--],nums1[m--]);
          }
          swap(nums1[i--],nums2[n--]);
      }
       
    } 