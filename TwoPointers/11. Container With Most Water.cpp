class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0 , j=height.size()-1;
        int cur_water, max_water=0;
        while(i<j){
            cur_water = min(height[i],height[j])*(j-i);
            max_water = max(max_water,cur_water);
            (height[i]>height[j]) ? j-- : i++ ;
        }
        return max_water;
    }
};