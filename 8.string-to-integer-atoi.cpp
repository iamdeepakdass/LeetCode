/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    string getNum(string str)
    {
        string ans = "";
        int n = str.size();

        for (int i = 0; i < n; i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                ans += str[i];
            }
            else
            {
                continue;
            }
        }
        return ans;
    }

    int strToint(string s)
    {
        int n = s.size();
        int ans = 0;
        int p = n - 1;
        int k = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += (s[i]) * pow(10, k++);
        }

        return ans;
    }

    int myAtoi(string s)
    {
        string str = getNum(s);
        // cout << str;

        int ans = strToint(str);
        cout << ans;
        return ans;
    }
};
// @lc code=end
