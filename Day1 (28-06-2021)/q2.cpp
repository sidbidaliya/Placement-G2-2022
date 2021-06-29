//Q2: remove key from array (without maintaining order)
//e.g. given array [1,2,3,3,4], then resultant array will be [1,2,4].

#include <bits/stdc++.h>
using namespace std;

void removeKeys(vector<int> &v, int n, int key)
{
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (v[j] == key)
        {
            j++;
            if (v[j] != key)
            {
                v[i + 1] = v[j];
                i++;
            }
        }
        else
        {
            if (i + 1 == j)
                i++;
            else
            {
                v[i + 1] = v[j];
                i++;
            }
        }
    }
    v.resize(i + 1);
}

void printVec(vector<int> &v)
{
    cout << "\nResultant Array: [";
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        cout << v[i] << ",";
    }
    cout << v[size - 1] << "]" << endl;
}

int main()
{
    int x, n, key;
    vector<int> v;
    cout << "Enter array length: ";
    cin >> n;
    cout << "\nEnter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "\nEnter key: ";
    cin >> key;
    removeKeys(v, n, key);
    printVec(v);
    return 0;
}