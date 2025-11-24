class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result;
        int num = 0;

        for (int x : nums) {
            num = (num * 2 + x) % 5;
            result.push_back(num == 0);
        }

        return result;
    }
};
