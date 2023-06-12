/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution
{
public:
    void findCombinationSum(int ind, int target, vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr)
    {

        // base condition
        if (ind == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        // pick the element
        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            findCombinationSum(ind, target - arr[ind], ans, ds, arr);
            ds.pop_back();
        }
        // Not pick the element
        findCombinationSum(ind + 1, target, ans, ds, arr);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        // int ind = 0;
        findCombinationSum(0, target, ans, ds, candidates);
        return ans;
    }
};
// @lc code=end
