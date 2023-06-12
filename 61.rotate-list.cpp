/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head == NULL || head->next == NULL || k == 0)
        {
            return head;
        }

        ListNode *curr = head;
        int len = 0;
        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }
        k = k % len;
        curr = head;

        ListNode *prev = NULL;
        ListNode *newNode = NULL;

        while (k--)
        {
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            newNode = curr;
            prev->next = NULL;
            newNode->next = head;
            head = newNode;
            curr = head;
        }

        return head;
    }
};
// @lc code=end
