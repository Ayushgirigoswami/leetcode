class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ones=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

           
        for(auto &p:mp){
            if(p.second==1){
                ones=p.first;
            }
        }

        return ones;
    }
};