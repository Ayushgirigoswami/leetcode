class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxwater=0;

        while(l < r){

            int w = r -l;
            int h = min(height[l],height[r]); 
            int area = w * h;
            maxwater = max(area,maxwater);

            if(height[l]<height[r]) l++;

            else if(height[l]>height[r]) r--;

            else {
                r--;
                l++;
            }
        }
            return maxwater;
    }
};
