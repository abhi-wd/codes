class Solution
{
public:
    bool isPalindrome(string s)
    {
        string to_test = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
                to_test += s[i] + 32;
            else if (iswalnum(s[i]))
                to_test += s[i];
        }
        for (int i = 0; i < to_test.length() / 2; i++)
        {
            if (to_test[i] != to_test[to_test.length() - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};