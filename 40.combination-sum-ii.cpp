/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution
{
public:
    void findCombinationSum(int ind, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int> &arr)
    {

        // base condition
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); i++)
        {
            // if the elements are same as chosen before then skip it
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            // if the elment is greater the target then break the loop
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            findCombinationSum(i + 1, target - arr[i], ds, ans, arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {

        // sort the given array because ans needed is to be lexo. sorted
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinationSum(0, target, ds, ans, candidates);

        return ans;
    }
};
// @lc code=end
