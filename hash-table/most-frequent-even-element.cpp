class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                mp[nums[i]]++;
        }
        
        int min_ele=INT_MIN;
        int ans=-1;
        vector<int>res;

        for(auto it : mp){
            if(it.second>min_ele ){
                min_ele=it.second;
                res.clear();
                res.push_back(it.first);
            }

             else if (it.second == min_ele) {
                res.push_back(it.first);    
            }
        }

       

         if(!res.empty()){
            auto minvalue = min_element(res.begin(), res.end());
            return *minvalue;   
        } else {
            return ans;        
        }

    }
};