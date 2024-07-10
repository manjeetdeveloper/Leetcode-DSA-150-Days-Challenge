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
    vector<vector<int>> levelOrder(TreeNode* root) {

        //Let me go by DFS 

        // DFS se Solve krgte hai  OKY 
            vector<vector<int>>res;
            DFS(res, root, 0);
            return res;
        }


        void DFS(vector<vector<int>> & res, TreeNode* root, int level) {
            if(!root) return;
            if(level == res.size()) res.push_back(vector<int>());
            res[level].push_back(root->val);
            DFS(res, root->left, level + 1);
            DFS(res,  root->right, level + 1);
        }
        

};