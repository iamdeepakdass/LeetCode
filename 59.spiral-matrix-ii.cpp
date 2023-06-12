/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {

        if (n == 1)
        {
            return {{1}};
        }
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int startRow = 0;
        int startCol = 0;
        int endRow = n - 1;
        int endCol = n - 1;

        int total = n * n;
        int cnt = 0;
        int num = 1;
        while (cnt < total)
        {
            for (int i = startCol; i <= endCol && cnt < total; i++)
            {
                ans[startRow][i] = num++;
                cnt++;
            }
            startRow++;

            for (int i = startRow; i <= endRow && cnt < total; i++)
            {
                ans[i][endCol] = num++;
                cnt++;
            }
            endCol--;

            for (int i = endCol; i >= startCol && cnt < total; i--)
            {
                ans[endRow][i] = num++;
                cnt++;
            }
            endRow--;

            for (int i = endRow; i >= startRow && cnt < total; i--)
            {
                /* code */
                ans[i][startCol] = num++;
                cnt++;
            }
            startCol++;
        }

        return ans;
    }
};
// @lc code=end
