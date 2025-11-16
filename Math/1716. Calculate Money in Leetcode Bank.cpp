class Solution {
public:
    int totalMoney(int n) {
        int ans =0;
        int k = 1,count = 1;
        for (int i=1;i<=n;i++)
        {
            ans +=k;
            k++;
            if(i%7==0)
            {
                count++;
                k=count;
            } 
        }
        return ans;
    }
};