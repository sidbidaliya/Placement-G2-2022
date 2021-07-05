class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        int b;
        res.push_back(first);
        for(int i=0;i<encoded.size();i++){
            b=first^encoded[i];
            res.push_back(b);
            first=b;
        }
        return res;
    }
};
