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
    vector<int> postorderTraversal(TreeNode* root) {

        // Recursives Se krnge plhe 
        vector<int>res;  // To store the result of postorder traversal.
        DFS(root, res);   // Stack to help with the traversal.
        return res;
    }

    void DFS(TreeNode* root, vector<int>& res)
    {
        if(!root) return;
        DFS(root->left, res);  // Push the left child of the current node to the stack.
        DFS(root->right, res);
        res.push_back(root->val);
        
    }
};