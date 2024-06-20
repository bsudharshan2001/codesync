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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* p=l1;
       ListNode* q=l2;
       ListNode* temp = new ListNode(0);
       ListNode* cur=temp;
       int carry=0, x,y,sum;
       while(p!=NULL||q!=NULL){
        if(p!=NULL)
            x=p->val;
        else x=0;
        
        if(q!=NULL)
            y=q->val;
        else y=0;

        sum = carry+x+y;
        carry=sum/10;

        cur->next=new ListNode(sum%10);
        cur=cur->next;

        if(p!=NULL)
            p=p->next;
        if(q!=NULL)
            q=q->next;
       }

       if(carry>0)
            cur->next=new ListNode(carry);

        return temp->next;    
    }
};


// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        struct ListNode* cur1=l1;
//        struct ListNode* cur2=l2;

//        if(cur1==NULL && cur2==NULL)
//             return NULL;
//         else if(cur1==NULL)
//             return cur2;
//         else return cur1;

//         int len1=0,len2=0;
//         while(cur1!=NULL){
//             len1++;
//             cur1=cur1->next;
//         }
//         while(cur2!=NULL){
//             len2++;
//             cur2=cur2->next;
//         }
//         struct ListNode* newcur1=l1;
//         struct ListNode* newcur2=l2;
//         int carry=0;
        
//         if(len1==len2){
//             while(newcur1!=NULL){
//                 carry=(newcur1.val+newcur2.val)%10
//             }
//         }
//         else if(len1>len2){
//             while(newcur1!=NULL){
//                 (newcur1.val+newcur2.val)
//             }
//         }
//         else{
//             while(newcur2!=NULL){
//                 (newcur1.val+newcur2.val)
//             }
//         }
        
        
//     }
// };