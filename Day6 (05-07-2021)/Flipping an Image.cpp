class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r,c;
        r=image.size();
        c=image[0].size();
        
        int i=0, j=0;
        
        for(i=0; i<r; i++)
            reverse(image[i].begin(),image[i].end());
        
        for(i=0; i<r; i++){
            for(j=0; j<c; j++)
                image[i][j] ^= 1;
        }
        return image;
    }
};