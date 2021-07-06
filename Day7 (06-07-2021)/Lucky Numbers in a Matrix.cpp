class Solution {
public:
    
    bool checkMax(vector<vector<int>> &matrix, int max, int c, int row){
        int res = matrix[0][c];
        for(int i=0; i<row; i++){
            if(matrix[i][c] > res)
                res = matrix[i][c];
        }
        if(res == max)
            return true;
        return false;
    }
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i=0, j=0, row, col, min=0, c=0;
        
        row = matrix.size();
        col = matrix[0].size();
        vector<int> v;
        
        for(i=0; i<row; i++){
            min=matrix[i][0];
            for(j=0; j<col; j++){
                if(matrix[i][j] < min){
                    min = matrix[i][j];
                    c = j;
                }
            }
            if(checkMax(matrix, min, c, row)){
                v.push_back(min);
                break;
            }
        }
        return v;
    }
};