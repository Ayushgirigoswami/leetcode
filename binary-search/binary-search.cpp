class Solution {
public:
    int search(vector<int>& v, int target) {

        int low = 0;
        int high =v.size()-1;

        while( low <= high ){
            int mid = low + (high - low) /2;

            if (v[mid] == target) return mid;
            else if (v[mid] < target) low = mid + 1;
            else high = mid - 1;

        }
            return -1;
    }
};