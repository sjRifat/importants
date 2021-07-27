/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *TwoStep=head;
        ListNode *OneStep=head;
        while(TwoStep != NULL && TwoStep->next != NULL){
            TwoStep=TwoStep->next->next;
            OneStep=OneStep->next;
            if(TwoStep==OneStep) return true;
        }
        return false;
    }
};