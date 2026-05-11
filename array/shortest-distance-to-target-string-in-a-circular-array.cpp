class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
       
       int distance = INT_MAX;
       int n=words.size();
for (int i = 0; i < n; i++) {
    if (words[i] == target) {
        int d = abs(i - startIndex);
        d = min(d, n - d);  
        distance = min(distance, d);
    }
}
return (distance == INT_MAX ? -1 : distance);


        
    }
};