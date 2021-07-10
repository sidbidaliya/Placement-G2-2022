class Solution
{
public:
    bool valid(char ch)
    {
        if (isalpha(ch) != 0)
            return true;
        if (isdigit(ch) != 0)
            return true;

        return false;
    }

    bool isPalindrome(string s)
    {
        int l = 0, r = s.size() - 1;

        while (l < r)
        {
            if (valid(s.at(l)) && valid(s.at(r)))
            {
                if (tolower(s.at(l)) == tolower(s.at(r)))
                {
                    l++;
                    r--;
                }
                else
                    return false;
            }
            else if (valid(s.at(l)))
                r--;
            else if (valid(s.at(r)))
                l++;
            else
            {
                l++;
                r--;
            }
        }
        return true;
    }
};