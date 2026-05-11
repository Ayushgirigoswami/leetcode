class Solution {
public:
    int mirrorDistance(int n) {
        int k = n;
        string s1=to_string(k);

        reverse(s1.begin(),s1.end());

        int rnum = stoi(s1);

        int res = abs(n-rnum);
     


      return res; 
    }
};