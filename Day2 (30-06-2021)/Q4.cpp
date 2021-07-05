#include<bits/stdc++.h>
using namespace std;
int gp(int a[],int n)
{
    map<int,int> freq;
    int g=0;
    for(int i=0;i<n;i++)
    {

    freq[a[i]]++;
    if( freq[a[i]]>1){
        g+= (freq[a[i]]-1);
    }
    }return g;
}



int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<gp(a,n);
}
