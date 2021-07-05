class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       int h[26]={0};int t=0;
        for(int i=0;i<allowed.size();i++)h[allowed[i]-'a']++;
        for(int i=0;i<words.size();i++){
            int g=1;
            for(int j=0;j<words[i].size();j++){
                if(!h[words[i][j]-'a'])
                    g=0;
            }if(g==1)t++;
        }
        
   return t; }
};
  
