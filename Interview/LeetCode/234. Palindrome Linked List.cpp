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
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL) return true;
        ListNode *slow=head,*fast=head,*cur=head,*prev=NULL;
        while(fast and fast->next){
            cur=slow;
            slow=slow->next;
            fast=fast->next->next;
            cur->next=prev;
            prev=cur;
        }
        if(fast) slow=slow->next;
        while(prev and prev->val==slow->val){
            prev=prev->next;
            slow=slow->next;
        }
        return !prev;
    }
};
