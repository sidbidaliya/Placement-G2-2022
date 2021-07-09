class Solution
{
public:
    int checkOpenOrClose(char ch)
    {
        switch (ch)
        {
        case '(':
            return 1;
        case ')':
            return -1;
        case '[':
            return 2;
        case ']':
            return -2;
        case '{':
            return 3;
        case '}':
            return -3;
        }
        return 0;
    }

    bool isValid(string s)
    {
        stack<int> st;
        int i = 0, n, temp;
        n = s.size();

        if (n % 2 != 0)
            return false;

        for (i = 0; i < n; i++)
        {
            temp = checkOpenOrClose(s.at(i));
            if (temp > 0)
            {
                st.push(temp);
            }
            else
            {
                if (st.empty())
                    return false;
                if (abs(st.top()) == abs(temp))
                    st.pop();
                else
                    break;
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};