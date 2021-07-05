class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size(),n=img[0].size();
        vector<vector<int>> a( m , vector<int> (n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int s=0;int c=1;
                if(i-1>=0&&j-1>=0){
                    s+=img[i-1][j-1];
                    c++;
                }  
                if(i-1>=0){
                    s+=img[i-1][j];
                    c++;
                }
                if(i-1>=0&&j+1<n){
                    s+=img[i-1][j+1];
                    c++;
                }
                if(j-1>=0){
                    s+=img[i][j-1];
                    c++;
                }
                if(j+1<n){
                    s+=img[i][j+1];
                    c++;
                }
                if(i+1<m&&j-1>=0){
                    s+=img[i+1][j-1];
                    c++;
                }
                if(i+1<m){
                    s+=img[i+1][j];
                    c++;
                }
                if(i+1<m&&j+1<n){
                    s+=img[i+1][j+1];
                    c++;
                }
                s+=img[i][j];
                a[i][j]=floor(s/c);  
            }
        }
    return a;
    }
};
