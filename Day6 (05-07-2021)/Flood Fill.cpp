class Solution {
public:
    void compute(vector<vector<int>> &image, int sr, int sc, int oldColor, int newColor){
        if(image[sr][sc] == newColor)
            return;
        if(image[sr][sc] == oldColor){
            image[sr][sc] = newColor;
            if(sr>0)                                    //for upward
                compute(image, sr-1, sc, oldColor, newColor);
            if(sc>0)                                    //for  left
                compute(image, sr, sc-1, oldColor, newColor);
            if(sr<image.size()-1)                         //for downward
                compute(image,sr+1, sc, oldColor, newColor);
            if(sc<image[0].size()-1)                      //for right
                compute(image, sr, sc+1, oldColor, newColor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        compute(image, sr, sc, oldColor, newColor);
        return image;
    }
};