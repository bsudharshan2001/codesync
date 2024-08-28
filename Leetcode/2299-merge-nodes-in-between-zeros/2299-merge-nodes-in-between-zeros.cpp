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
    ListNode* mergeNodes(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* cur = head->next;
        int sum = 0;
        ListNode* newHead = new ListNode(0);
        ListNode* newCur = newHead;

        while (cur != nullptr) {
            if (cur->val == 0) {
                newCur->next = new ListNode(sum);
                newCur = newCur->next;
                sum = 0;
            } else {
                sum += cur->val;
            }
            cur = cur->next;
        }

        return newHead->next;
    }
};
