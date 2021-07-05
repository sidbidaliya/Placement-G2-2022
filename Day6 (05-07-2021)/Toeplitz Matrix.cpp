class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int temp,r,c;
        r = matrix.size();
        c = matrix[0].size();
        
        int a,b;
        for(int i=0; i<c; i++){                     //diagonals associates with 1st row
            temp = matrix[0][i];
            a=0;
            b=i;
            while(a<r && b<c){
                if(matrix[a][b] != temp){
                    return false;
                }
                a++;
                b++;
            }
        }
        for(int i=1; i<r; i++){                     //diagonals associated with 1st column
            temp = matrix[i][0];
            a=i;
            b=0;
            while(a<r && b<c){
                if(matrix[a][b] != temp){
                    return false;
                }
                a++;
                b++;
            }
        }
        return true;
    }
};