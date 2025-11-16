class Solution {
public:
    int smallestNumber(int n) {
        int k, result;
        k = floor(log2(n)) + 1;
        result = pow(2,k) - 1;
        return result;
    }
};