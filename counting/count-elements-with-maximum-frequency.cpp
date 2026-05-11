class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        int maxFreq = 0; 
         for(auto &p : freq){
             if(p.second > maxFreq){ 
                maxFreq = p.second;
                
           }
         }

            int total=0;
         for(auto &p: freq){
           if(p.second == maxFreq){ 
                 total+=p.second;
           }
         }

         return total;
    }
};