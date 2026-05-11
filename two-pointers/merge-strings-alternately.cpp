class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=word1.size();
        int w2=word2.size();
        
        string str="";

        int n=min(w1,w2);

        for(int i=0;i<n;i++){
            str.push_back(word1[i]);
            str.push_back(word2[i]);
        }

        if(w1 >n ) str += word1.substr(n);
         if(w2 >n ) str += word2.substr(n);
        return str;
    }
};