class Solution {
public:
    bool checkIfPangram(string sentence) {
    vector<int>ans(26,false);

    if(sentence.size()<26) return false;
    for(int i=0;i<sentence.size();i++){
        ans[sentence[i]-'a']=true;
    }

    for(int i=0;i<26;i++){
        if(ans[i]==false) return false;
    }

        return true;
    }
};