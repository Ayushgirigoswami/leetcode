#include <bits/stdc++.h>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
      int start=0;

      for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[start],nums[j]);
              start++;
        }
       
      }
     
         
      
    }
};