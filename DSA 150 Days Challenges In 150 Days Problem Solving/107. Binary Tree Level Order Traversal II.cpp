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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        //Lets Start
            vector<vector<int>>v;
            dfs(root, v, 0);
            reverse(v.begin(), v.end());
            return v;

        }

        void dfs(TreeNode* root, vector<vector<int>>& v, int level) {
            if(!root) return;
            if(level == v.size()) v.push_back({});
            v[level].push_back(root->val);
            dfs(root->left, v, level + 1);
            dfs(root->right, v, level + 1);
        
        
    }
};