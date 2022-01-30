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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        int l=0;
        ListNode* dummy=head;
        while(dummy){
            l++;
            dummy=dummy->next;
        }
        if(n==l){
            head=head->next;
            return head;
        }
        ListNode* dummy2=head;
        int N=l-n;
        int x=1;
        while(x<N){
            dummy2=dummy2->next;
            cout<<dummy2->val<<'\n';
            x++;
        }
        ListNode* node=dummy2->next;
        dummy2->next=dummy2->next->next;
        delete(node);
        return head;
    }
};