class Solution {
public:
    
    bool comp(vector<string> &strs, int j, string ch){
        int i=0, n=strs.size();
        
        for(i=0; i<n; i++){
            if(strs[i][j] == '\0')
                return false;
            if(strs[i][j] != ch[0])
                return false;
        }
        
        return true;
        
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string res,ch;
        int i=0; 
        
        for(i=0; i<strs[0].size(); i++){
            ch = strs[0][i];
            if(comp(strs,i,ch))
                res.append(ch);
            else
                break;
        }
        return res;
    }
};