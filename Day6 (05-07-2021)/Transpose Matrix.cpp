class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r,c;
        r = matrix.size();
        c = matrix[0].size();
        vector<vector<int>> res(c, vector<int> (r));
        for(int i=0; i<c; i++){
            for(int j=0; j<r; j++){
                res[i][j] = matrix[j][i];
            }
        }
        return res;
    }
};