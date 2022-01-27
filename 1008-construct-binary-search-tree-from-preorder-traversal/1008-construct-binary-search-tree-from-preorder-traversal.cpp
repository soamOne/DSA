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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return helper(preorder, i, INT_MAX);
    }
    
    TreeNode* helper(vector<int>& preorder, int& i, int ub){
        if(i==preorder.size() || preorder[i]>ub) return NULL;
        TreeNode* node=new TreeNode(preorder[i]);
        i++;
        node->left=helper(preorder, i, node->val);
        node->right=helper(preorder, i, ub);
        return node;
    }
};