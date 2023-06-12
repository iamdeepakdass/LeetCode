/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> pq;

        int n = nums.size();
        int i = 0;
        while (i < n)
        {
            pq.push(nums[i]);
            i++;
        }

        while (k > 1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};
// @lc code=end
