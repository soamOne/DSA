/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>nums;
    bool findTarget(TreeNode* root, int k) {
        inorderTraversal(root);
        vector<int> ans;
        unordered_map<int, int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(k-nums[i])!=m.end()){
                ans.push_back(m[k-nums[i]]);
                ans.push_back(i);
                return (ans.size()!=0);
            }
            m[nums[i]]=i;
        }
        return (ans.size()!=0);
        
    }
    
    void inorderTraversal(TreeNode* root) {
        if(!root) return;
        inorderTraversal(root->left);
        nums.push_back(root->val);
        inorderTraversal(root->right);
        
    }
};