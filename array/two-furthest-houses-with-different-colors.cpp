class Solution {
public:
    int maxDistance(vector<int>& colors) {
        vector<int>v;
        int maxi=INT_MAX;
        // int j=1;
        for(int i=0;i<colors.size();i++){
            if(colors[i]!=colors[0]){
               
                 v.push_back(i);
            }
         
           for (int i=0;i<colors.size();i++){
            if(colors[i] != colors[colors.size()-1]) v.push_back(colors.size()-1-i);
           } 
        }
        auto max_it = max_element(v.begin(), v.end());
        
        

        return *max_it;
    }
};