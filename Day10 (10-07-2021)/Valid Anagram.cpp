class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> freq;
        int i = 0, n;
        n = s.size();

        if (n != t.size())
            return false;

        for (i = 0; i < n; i++)
        {
            freq[s.at(i)]++;
            freq[t.at(i)]--;
        }
        for (auto it : freq)
        {
            if (it.second < 0)
                return false;
        }
        return true;
    }
};