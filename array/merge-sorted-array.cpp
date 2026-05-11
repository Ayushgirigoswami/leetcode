class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        map<int,int>mp;
        for(int i=0;i<nums1.size()-n;i++){
                mp[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
                mp[nums2[i]]++;
        }
        int k=0;

        for(auto &it : mp){
           int value=it.first;
           int freq=it.second;

           while(freq--){
            nums1[k++]=value;
           }
        }

       
    }
};