class Solution {
public:
    
    int r2i(char ch){
        switch(ch){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    
    int romanToInt(string s) {
        int i=0,res=0,a,b;
        
        for(i=0; i<s.size(); i++){
            a = r2i(s[i]);
            b = r2i(s[i+1]);
            if(a<b){
                res+=(b-a);
                i++;
            }
            else
                res+=a;
        }
        return res;
    }
};