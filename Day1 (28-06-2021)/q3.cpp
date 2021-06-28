// Q3: Reshuffle the array (without inplace).
// e.g. given array [a1,a2,a3,a4,x1,x2,x3,x4], then the resultant array will be [a1,x1,a2,x2,a3,x3,a4,x4].

#include <bits/stdc++.h>
using namespace std;

void reShuffle(vector<int> &v, int n)
{
    int i = 0, j = n / 2;
    vector<int> temp;
    for (int it = 0; it < n; it++)
        temp.push_back(v[it]);

    for (int it = 0; it < n; it++)
    {
        if (it % 2 == 0)
            v[it] = temp[i++];
        else
            v[it] = temp[j++];
    }
}

void printVec(vector<int> &v, int n)
{
    cout << "\nResultant Array: [";
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << ",";
    }
    cout << v[n - 1] << "]" << endl;
}

int main()
{
    int x, n;
    vector<int> v;
    cout << "Enter array length (even): \n";
    cin >> n;
    cout << "\nEnter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    reShuffle(v, n);
    printVec(v, n);
    return 0;
}