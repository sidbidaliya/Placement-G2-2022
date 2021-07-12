class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ioc;
        int i=0, j=0, n=s.size();
        vector<int> res(n,0);
        
        for(i=0; i<n; i++){
            if(s[i] == c)
                ioc.push_back(i);
        }
                
        for(i=0; i<n; i++){
            if(s[i] == c)
                res[i]=0;
            else{
                res[i]=abs(i-ioc[0]);
                for(j=0; j<ioc.size(); j++)
                    res[i] = min(abs(i-ioc[j]),res[i]);
            }
        }
        
        return res;
            
    }
};