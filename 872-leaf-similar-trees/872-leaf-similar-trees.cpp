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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> t1,t2;
        if(!root1 || !root2) return false;
        t1=DFS(root1, t1);
        t2=DFS(root2, t2);
        return t1==t2;    
    }
    vector<int> DFS(TreeNode* root, vector<int>& ans){
        if(!root) return vector<int>{};
        if(!root->left && !root->right) ans.push_back(root->val);
        if(root->left) DFS(root->left, ans);
        if(root->right) DFS(root->right, ans);
        return ans;
    }
};