class Solution {
public:
    int one(int a){
        int a1[2]={0,0};
        while(a>0){
            if(a%2==0)
                a1[0]++;
            else
                a1[1]++;
            a/=2;
        }
        return a1[1];
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> b;
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
        m[arr[i]]=one(arr[i]);
        cout<<m[arr[i]]<<" ";
        }
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size()-i-1;j++){
                if(m[arr[j]]>m[arr[j+1]]){
                    swap(arr[j],arr[j+1]);
                }else if(m[arr[j]]==m[arr[j+1]]){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                    }
                }   
            }
        }
        return arr;
    }
};
