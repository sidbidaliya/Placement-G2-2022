class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        vector<vector<int>> a( r , vector<int> (c, 0));
        int i1=0,j1=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i1][j1]=mat[i][j];j1++;
                if(j1>=c)
                    j1=0;i1++;
            }
        }
        return a;
    }
};
