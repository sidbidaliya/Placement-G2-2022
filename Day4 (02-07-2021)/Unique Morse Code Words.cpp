class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words){
        string h[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> ss; 
        for(int i=0;i<words.size();i++){
            string s;
            for(int j=0;j<words[i].size();j++)
                s+=h[words[i][j]-'a'];

           ss.insert(s);}

        return ss.size();
        
    }
    void ogcode(){
//string m[words.size()];map<string,int>m1;
      //for(int i=0;i<words.size();i++;for(int j=0;j<words[i].size();j++){
               //s+=h[words[i][j]-'a'];
           //}m[i]=s;m1[s]=1;
           //s.erase();
       //}int t=0;
        //for(int i=0;i<words.size();i++){if(m1[m[i]]==1){t++;m1[m[i]]=0;}}
    }
};

           
