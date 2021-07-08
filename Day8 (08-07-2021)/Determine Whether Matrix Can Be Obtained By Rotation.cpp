class Solution {
public:
    
    void rotate(vector<vector<int>> &mat,int n){
        int i=0,j=0;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i>j){
                    swap(mat[i][j], mat[j][i]);
                }
            }
        }
        
        for(i=0; i<n; i++)
            reverse(mat[i].begin(), mat[i].end());
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        int k=4;
                        
        while(k--){
            rotate(mat,n);
            if(mat == target)
                return true;
        }
        return false;
    }
};