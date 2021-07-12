class Solution {
public:
    string thousandSeparator(int n) {
        string res="", temp=to_string(n);
        int i=temp.size()-1, a,b;
        
        a=(i+1)/3;
        b=(i+1)%3;
        
        if(b==0)
            a--;
        
        while(a--){
            res = temp[i--] + res;
            res = temp[i--] + res;
            res = temp[i--] + res;
            res = "." + res;
        }
        
        if(b!=0){
            for(i=b-1; i>=0; i--){
            res=temp[i]+res;
            }
        }else{
            res = temp[i--] + res;
            res = temp[i--] + res;
            res = temp[i--] + res;
        }
        
        return res;
    }
};