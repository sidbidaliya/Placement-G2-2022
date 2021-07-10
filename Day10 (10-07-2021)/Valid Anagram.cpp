class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        vector<vector<int>> v(26, vector<int>(2, 0));
        int i = 0;
        for (i = 0; i < s.size(); i++)
            v[s[i] - 'a'][0]++;

        for (i = 0; i < t.size(); i++)
            v[t[i] - 'a'][1]++;

        for (i = 0; i < 26; i++)
        {
            if (v[i][0] != v[i][1])
                return false;
        }

        return true;
    }
};