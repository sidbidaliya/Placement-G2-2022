class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(), len=0, i=0;
        if(n == 0)
            return 0;
        
        i=n-1;
        
        while(i>-1){
            if(s.at(i) == ' '){
                i--;
            }
            else
                break;
        }
        
        if(i<0)
            return 0;
        
        for(i; i>=0; i--){
            if(s.at(i) != ' ')
                len++;
            else
                break;
        }
        return len;
    }
};