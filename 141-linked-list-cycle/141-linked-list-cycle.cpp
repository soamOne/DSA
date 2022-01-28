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
        if(!head) return false;
        ListNode* s=head;
        ListNode* f=head->next;
        while(s!=f){
            if(!f || !f->next) return false;
            s=s->next;
            f=f->next->next;
        }
        return true;
    }
};