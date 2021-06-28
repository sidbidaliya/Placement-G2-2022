// Q1: Remove duplicates from the sorted (non-decreasing) array with O(1) space complexity.
// e.g. given array is [1,2,2,3,4,4], then final array will be [1,2,3,4].

#include<bits/stdc++.h>
using namespace std;

void RemoveDuplicates(vector<int> &v, int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(v[i] == v[j]){
            j++;
            if(v[i]!=v[j]){
                v[i+1] = v[j];
                i++;
            }
        }
        else{
            if(i+1 == j){
                i++;
            }
            else{
                v[i+1] = v[j];
                i++;
            }
        }
    }

    v.resize(i+1);
}

void printVec(vector<int> &v){
    cout<<"\nResultant Array: [";
    int size = v.size();
    for(int i=0; i<size-1; i++){
        cout<<v[i]<<",";
    }
    cout<<v[size-1]<<"]"<<endl;
}

int main(){
    int n,x;
    vector<int> v;
    cout<<"Enter total no. of elements: ";
    cin>>n;
    cout<<"\nEnter elements:\n";
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    RemoveDuplicates(v,n);
    printVec(v);
    return 0;
}