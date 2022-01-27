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
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
        if(!root) return 0;
        vector<vector<int>> ans;        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>row;
            for(int i=0;i<n;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                row.push_back(node->val);
            }
            ans.push_back(row);
        }
        for(int i=0;i<ans[ans.size()-1].size();i++){
            sum+=ans[ans.size()-1][i];
        }
        return sum;
    }
};