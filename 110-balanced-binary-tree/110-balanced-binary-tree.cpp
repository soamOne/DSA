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
#include<math.h>
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh=INT_MIN, rh=INT_MIN;
        lh=treeHeight(root->left);
        rh=treeHeight(root->right);
        return (abs(lh-rh)<=1) && isBalanced(root->left) && isBalanced(root->right);
        
    }
    int treeHeight(TreeNode* root){
        if(!root) return 0;
        return max(treeHeight(root->left),treeHeight(root->right))+1;
    }
};