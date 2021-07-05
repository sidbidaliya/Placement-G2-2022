class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> e;
        int s=0;
        e=heights;
        sort(e.begin(),e.end());
        for(int i=0;i<e.size();i++)if(e[i]!=heights[i])s++;
        return s;
    }
};
