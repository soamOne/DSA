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
        if(!head || !head->next) return NULL;
        ListNode* prev=new ListNode();
        ListNode* slow=head;
        ListNode* fast=head;
        prev->next=head;
        while(fast && fast->next){
            slow=slow->next;
            prev=prev->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        delete(slow);
        return head;
    }
};