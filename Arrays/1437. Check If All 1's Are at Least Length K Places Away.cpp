class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count_1 = 0, count_0 = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == 1){
                count_1++;
            }
            if(count_1 == 1 && nums[i] == 0){
                count_0++;
            }
            if(count_1 == 2){
                if(!(count_0 >= k)){
                    return false;
                }
                else{
                    count_1--;
                    count_0 = 0;
                }
            }
            if( i == nums.size()-1){
                return true;
            }
        }
        return true;
    }
};