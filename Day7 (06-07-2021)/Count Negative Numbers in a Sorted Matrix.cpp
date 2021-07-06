class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0, r, c;
        r = grid.size();
        c = grid[0].size();
        
        if(grid[0][0] < 0)
            return r*c;
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] < 0){
                    sum+= c-j;
                    break;
                }
            }
        }
        return sum;
    }
};