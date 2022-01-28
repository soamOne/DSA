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
#include<math.h>
class Solution {
public:
    vector<int>rev;
    int getDecimalValue(ListNode* head) {
        if(!head) return 0;
        reverse(head);
        int ans=0;
        for(int i=0;i<rev.size();i++){
            ans+=(rev[i])*pow(2,i);
        }
        return ans;
    }
    
    void reverse(ListNode* head){
        if(!head) return;
        reverse(head->next);
        rev.push_back(head->val);
    }
};