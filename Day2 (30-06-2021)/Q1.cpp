#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,p,i,j,max=0,cust;
    cin>>m>>n;
    vector < vector  <int> > a(m);
    for( i=0;i<m;i++)
    {
    for( j=0;j<n;j++)
    {cin>>p;
    a[i].push_back(p);
    }
    }
    for(i=0;i<m;i++){
        int t=0;
        for(j=0;j<n;j++){
            t+=a[i][j];
        }if(t>max)cust=i+1;
    }
    cout<<cust;


}
