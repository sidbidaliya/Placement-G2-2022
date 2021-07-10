class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string res = "";

        while (columnNumber > 0)
        {
            res = char(65 + ((columnNumber - 1) % 26)) + res;
            columnNumber = (columnNumber - 1) / 26;
        }

        return res;
    }
};