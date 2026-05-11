class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualsum = n*(n+1)/2;

       int  ax = accumulate(nums.begin(),nums.end(),0);

        return actualsum-ax;
   
    }
};