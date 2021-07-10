class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<vector<int>> v(26, vector<int>(2, 0));
        int r = ransomNote.size();
        int i = 0;
        for (i = 0; i < r; i++)
            v[ransomNote[i] - 'a'][0]++;

        for (i = 0; i < magazine.size(); i++)
            v[magazine[i] - 'a'][1]++;

        for (i = 0; i < r; i++)
        {
            if (v[ransomNote[i] - 'a'][0] > v[ransomNote[i] - 'a'][1])
                return false;
        }

        return true;
    }
};