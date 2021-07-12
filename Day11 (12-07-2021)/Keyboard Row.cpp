class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> v(26,0);
        vector<string> result;
        string str1="qwertyuiop", str2="asdfghjkl", str3="zxcvbnm";
        int line=0, i=0, j=0, f=0;
        
        for(i=0; i<str1.size(); i++)
            v[tolower(str1[i]) - 97] = 1;
        
        for(i=0; i<str2.size(); i++)
            v[tolower(str2[i]) - 97] = 2;
        
        for(i=0; i<str3.size(); i++)
            v[tolower(str3[i]) - 97] = 3;
        
        for(i=0; i<words.size(); i++){
            line=v[tolower(words[i][0]) - 97];
            f=0;
            for(j=1; j<words[i].size(); j++){
                if(v[tolower(words[i][j]) - 97] != line){
                    f=1;
                    break;
                }
            }
            if(f==0)
                result.push_back(words[i]);
        }
        return result;
    }
};