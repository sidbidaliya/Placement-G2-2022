class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> result(grid);
        int r = n * m;
        k = k%r;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int dest = (((i * m) + j) + k)%r;
                int x = dest/m;
                int y = dest - x * m;
                result[x][y] = grid[i][j];
            }
        }
        return result;
        
    }
};
