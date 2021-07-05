class Solution {
public:
    string truncateSentence(string s, int k) {
      int i=0;
      while(k!=0){
        if(i==s.size()-1)
          return s;
        if(s[i]==' ')
          k--;
        i++;
      }
      s=s.substr(0,i-1);
      return s;
        
    }
};
