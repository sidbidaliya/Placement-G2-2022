class Solution
{
public:
    bool checkVowel(char ch)
    {
        if (ch == 'a' || ch == 'A')
            return true;
        else if (ch == 'e' || ch == 'E')
            return true;
        else if (ch == 'i' || ch == 'I')
            return true;
        else if (ch == 'o' || ch == 'O')
            return true;
        else if (ch == 'u' || ch == 'U')
            return true;
        else
            return false;
    }

    string reverseVowels(string s)
    {
        int left = 0, right = 0;
        right = s.size() - 1;

        while (left < right)
        {
            if (checkVowel(s.at(left)) && checkVowel(s.at(right)))
                swap(s.at(left++), s.at(right--));
            else if (checkVowel(s.at(left)))
                right--;
            else if (checkVowel(s.at(right)))
                left++;
            else
            {
                left++;
                right--;
            }
        }
        return s;
    }
};