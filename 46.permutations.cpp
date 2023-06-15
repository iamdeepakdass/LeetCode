/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution
{
public:
    void solve(int ind, int n, vector<vector<int>> &ans, vector<int> &arr)
    {
        if (ind == n)
        {
            /* code */
            ans.push_back(arr);
            return;
        }

        for (int i = ind; i < n; i++)
        {
            swap(arr[ind], arr[i]);
            solve(ind + 1, n, ans, arr);
            swap(arr[ind], arr[i]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        solve(0, n, ans, nums);

        return ans;
    }
};
// @lc code=end
