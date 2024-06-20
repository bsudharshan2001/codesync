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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return nullptr;
        ListNode* cur=head;
        int count=0;
        while(cur!=NULL){
            count++;
            cur=cur->next;
        }

        ListNode* newCur=head;
        ListNode* prev=NULL;
        for(int i=0;i<count/2-1;i++)
            newCur=newCur->next;
        
        prev=newCur;
        newCur=newCur->next;
        prev->next=newCur->next;

        cur=head;
    
        return cur;
    }
        
    
};