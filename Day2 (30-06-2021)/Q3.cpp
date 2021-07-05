#include<bits/stdc++.h>
using namespace std;
vector<bool> candies (vector<int>&kids, int n,int extra)
{
vector<bool> t;
int max=*max_element(kids.begin(),kids.end());
for(int i=0;i<n;i++)
{
if(kids[i]+extra>=max)
{
t.push_back(true);
}
else
{
t.push_back(false);
}
}
return t;
}
int main()
{
int n,num,extra;
cin>>n>>extra;
vector<int> kids;
for(int i=0;i<n;i++)
{
cin>>num;
kids.push_back(num);
}
vector<bool> t=candies(kids,n,extra);
for(int i=0;i<t.size();i++)
{
if(t[i]==1)
    cout<<"true ";
else
    cout<<"false ";
}
}
