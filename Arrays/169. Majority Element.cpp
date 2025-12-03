class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};


// moore's voting algorithm implementation
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans ;
        for(int i=0;i<nums.size();i++){
            if(freq == 0){
                ans = nums[i];
            }
            if( ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};