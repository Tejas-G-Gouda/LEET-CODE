class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> temp;
       
        // Flatten the grid
        for(int i = 0 ; i < n ; i++ ) {
            for(int j = 0 ; j < n ; j++ ) {
                temp.push_back(grid[i][j]);
            }
        }

        sort(temp.begin(), temp.end());

        int repeated = -1;
        int missing = -1;
        int N = n * n;

        for(int i = 0; i < temp.size() - 1; i++){
            if(temp[i] == temp[i+1]){
                repeated = temp[i]; 
                temp.erase(temp.begin()+i);                  
            }
        }
         for(int i = 0; i < temp.size() - 1; i++) {  
            if(temp[i] + 1 != temp[i+1]){
                missing = temp[i] + 1;
                break;   
            }                
        }


        if(temp[0] != 1)
            missing = 1;

        if(temp.back() != N)
            missing = N;

        return {repeated, missing};
    }
};
