class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i = 0; i<nums.size();){
            if(nums[i] == original){
                original *= 2;
                i=0;
            }
            else{
                i++;
            }
        }
        return original;
    }
};