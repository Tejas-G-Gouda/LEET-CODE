class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int p=0;
        for(int i=1;candies>0;i++){
            if(candies>=i){
                ans[p]=ans[p]+i;
            }
            else{
                ans[p]=ans[p]+candies;
            }
            candies=candies-i;
            p=(p+1)%num_people;
        }
        return ans;
    }
};