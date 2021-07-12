class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        int i=0;
        string str;
        for(i=0; i<p.size(); i++){
            p[i] = isalpha(p[i]) ? tolower(p[i]) : ' ';
        }
        stringstream s(p);
        unordered_map<string,int> result;
        unordered_set<string> ban(banned.begin(), banned.end());
        while(s >> str){
            if(!ban.count(str)){
                result[str]++;
            }
        }
        int freq = INT_MIN;
        string res;
        for(auto it:result){
            if(it.second > freq){
                res=it.first;
                freq=it.second;
            }
        }
        return res;
    }
};