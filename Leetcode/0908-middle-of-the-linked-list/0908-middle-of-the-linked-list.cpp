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
        vector<int> arr;
        ListNode* cur=head;
        int len=0, mid;
        while(cur!=nullptr){
            cur=cur->next;
            len++;
        }
        mid=len/2;
        len=0;
        ListNode* newCur=head;
        while(newCur!=nullptr){
            if(len!=mid){
                newCur=newCur->next;
                len++;
            }
            else{ 
                // arr.push_back(newCur->val);
                // newCur=newCur->next;
                return newCur;
            }
        }
        return cur;
    }
};