class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        
        int l=0;
        int r=  number.size()-1;

        while(l<r){

            int sum=number[l]+number[r];

            if(sum==target){
                return {l+1,r+1};
            }

            else if(sum<target){
                l++;
            }
            else{
                r--;
            }

           
        }

         return {};
    }
};