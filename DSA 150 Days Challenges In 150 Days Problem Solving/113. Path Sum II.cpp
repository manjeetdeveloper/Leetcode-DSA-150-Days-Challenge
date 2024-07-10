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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        if(!root) return res;
        DFS(root, res, vector<int>(), 0, targetSum);
        return res;
        
    }

     void DFS(TreeNode* root, vector<vector<int>>& res, vector<int>path, int sum, int target)
            {
                if(!root) return;
                path.push_back(root->val);
                sum += root->val;
                if(!root->left && !root->right){
                if(sum == target) res.push_back(path);
                return;
            }

            DFS(root->left, res, path, sum, target);
            DFS(root->right, res, path, sum, target);
     }
};