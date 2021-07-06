class Solution {
public:
    
    bool visited(vector<vector<int>> &mat, int i, int j){
        if(j==0)
            return false;
        if(mat[i][j-1] == 1)
            return false;
        return true;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        int c = mat[0].size();
        int i=0, j=0;
        vector<int> v;
        
        for(j=0; j<c; j++){
            for(i=0; i<r; i++){
                if(k>0){
                    if(mat[i][j] == 0 && !visited(mat, i , j)){
                    v.push_back(i);
                    k--;
                    }
                }
            }
            if(k<=0)
                break;
        }
        
        j=c-1;
        for(i=0; i<r; i++){
            if(k>0){
                if(mat[i][j] == 1 && !visited(mat, i,j)){
                    v.push_back(i);
                    k--;
                }
            }
        }
        return v;
    }
};