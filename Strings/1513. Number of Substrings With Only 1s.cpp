class Solution {
public:
    int numSub(string s) {
        long long count = 0;
        int i = 0;

        while (i < s.size()) {

            if (s[i] == '1') {

                long long len = 0;

                while (i < s.size() && s[i] == '1') {
                    len++;
                    i++;
                }

                count += (len * (len + 1)) / 2;
            }
            else {
                i++;
            }
        }

        return count % 1000000007;
    }
};
