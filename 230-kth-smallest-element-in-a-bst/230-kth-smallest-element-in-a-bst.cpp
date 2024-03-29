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
    vector<int> nums;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return nums[k-1];
    }
    vector<int> inorder(TreeNode* root){
        if(!root) return nums;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
        return nums;
    }
};