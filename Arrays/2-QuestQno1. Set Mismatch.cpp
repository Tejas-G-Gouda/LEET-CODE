class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int repeated,missing;
        vector<int> freq(n+1,0) ;
        for(int x : nums){
            freq[x]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i] == 2){
                repeated = i;
            }
            else if(freq[i] == 0){
                missing = i;
            }
        }
        return {repeated,missing};
    }
};