class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>count;
        
       

       

        for(auto n:nums){
            count[n]++;
        }

       vector<pair<int,int>>ans;
       vector<int>res;

        for(auto &p: count ){
            ans.push_back({p.second,p.first});
        }

       sort(ans.begin(),ans.end(),greater<pair<int,int>>());

        

        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }

        return res;
    }
};