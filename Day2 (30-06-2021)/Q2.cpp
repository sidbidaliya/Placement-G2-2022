#include<bits/stdc++.h>
using namespace std;


int main()
{
map<int,int> map;
int n,m;
cin>>n>>m;
vector<int> a1(n);
vector<int> a2(m);
for( int i=0;i<n;i++)
{
    cin>>a1[i];
    map[a1[i]]=1;
    
}
for( int i=0;i<m;i++)
{
    cin>>a2[i];
    map[a2[i]]+=1;
    
}

for( auto x: map)
{
    if(x.second>1)
    cout<<x.first;
}
