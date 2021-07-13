class Solution {
public:
    string reformatDate(string date) {
        string res="",temp;
        int n=date.size(), i=0, mn=0;
        vector<string> mon = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        
        if(date.size()==12){
            date = "0"+date;
            n++;
        }
        
        cout<<date;
        
        temp.push_back(date[5]);
        temp.push_back(date[6]);
        temp.push_back(date[7]);
        
        for(i=0; i<12; i++){
            mn=temp==mon[i] ? i+1 : mn;
        }
        
        temp = mn<10? "0"+to_string(mn) : to_string(mn);
                
        for(i=n-4; i<n; i++)
            res.push_back(date[i]);
        
        res.push_back('-');
        res.append(temp);
        res.push_back('-');
        
        for(i=0; i<2; i++)
            res.push_back(date[i]);
         
        return res;
    }
};