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
        vector<int>temp;
        while(head){
            temp.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=temp[temp.size()-i-1]) return false;
        }
        return true;
    }
};