#include<bits/stdc++.h>
using namespace std;

bool comp(vector<string> &str, int j, string ch, int n){
    int i=0;
    
    for(i=0; i<n; i++){
        if(str[i][j] == '\0')
            return false;
        if(str[i][j] != ch[0])
            return false;
    }

    return true;    
}

string longestCommonPostfix(vector<string> &str, int n){
    string res,ch;
    int i=0; 

    for(i=0; i<n; i++)
        reverse(str[i].begin(),str[i].end());
        
    for(i=0; i<str[0].size(); i++){
        ch = str[0][i];
        if(comp(str,i,ch,n))
            res.append(ch);
        else
            break;
    }

    reverse(res.begin(),res.end());
    return res;
}

int main(){
    vector<string> str;
    int n,i;
    string x;
    cout<<"Enter no. of string: ";
    cin>>n;
    cout<<"\nEnter elements: ";
    for(i=0; i<n; i++){
        cin>>x;
        str.push_back(x);
    }

    cout<<"\n"<<longestCommonPostfix(str,n);

    return 0;
}