class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> start ,end;
        int n = nums.size();
        int sum =0;
        for(int i=0;i<n-1;i++){
            sum += nums[i];
            start.push_back(sum);
        }
        sum=0;
        for(int i=n-1;i>0;i--){
            sum += nums[i];
            end.push_back(sum);
        }
        reverse(end.begin(),end.end());
        int count =0;
        for(int i=0;i<n-1;i++){
            if((start[i]-end[i])%2==0){
                count++;
            }
        }
        return count;
    }
};



//optimised solution
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int total = 0;

        for(int x : nums)
            total += x;

        int left = 0;
        int count = 0;

        for(int i = 0; i < n - 1; i++) {
            left += nums[i];
            int right = total - left;

            if((left - right) % 2 == 0)
                count++;
        }
        return count;
    }
};
