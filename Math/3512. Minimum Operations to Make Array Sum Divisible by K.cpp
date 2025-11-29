class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum =  accumulate(nums.begin(), nums.end(),0);
        int operations = sum % k;
        if(!operations){
            return 0;
        }
        return operations;
    }
};