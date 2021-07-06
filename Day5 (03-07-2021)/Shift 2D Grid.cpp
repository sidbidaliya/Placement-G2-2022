class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        int i=0, j=0, r, c;
        r = grid.size();
        c = grid[0].size();
        
        for(i=0; i<r; i++){
            for(j=0; j<c; j++)
                v.push_back(grid[i][j]);
        }
        
        k = k%(r*c);
        int it=0;
        
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                if(k>0)
                    grid[i][j] = v[(r*c)-(k--)];
                else
                    grid[i][j] = v[it++];
            }
        }
        return grid;
    }
};