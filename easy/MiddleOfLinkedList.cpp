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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head, *slow = head;
        while(fast&&fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};

/*
While slow moves one step forward, fast moves two steps forward.
Finally, when fast reaches the end, slow happens to be in the middle of the linked list.
For example, head = [1, 2, 3, 4, 5], I bolded the slow and fast in the list.
step 0: slow: [1, 2, 3, 4, 5], fast: [1, 2, 3, 4, 5]
step 1: slow: [1, 2, 3, 4, 5], fast: [1, 2, 3, 4, 5]
step 2: slow: [1, 2, 3, 4, 5], fast: [1, 2, 3, 4, 5]
end because fast cannot move forward anymore and return [3, 4, 5]
*/