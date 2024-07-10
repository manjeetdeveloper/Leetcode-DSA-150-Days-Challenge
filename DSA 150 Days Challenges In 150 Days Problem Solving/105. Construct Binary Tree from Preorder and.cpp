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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int, int>m;
        for(int i = 0; i < inorder.size(); i++) m[inorder[i]] = i;
        return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, m);
    }
        TreeNode* helper(vector<int>& preorder, int pStart, int pEnd, vector<int>& inorder, int iStart, int iEnd, unordered_map<int, int>& m) {
        if(pStart > pEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[pStart]);
        int i = m[preorder[pStart]];
        root->left = helper(preorder, pStart + 1, pStart + i - iStart, inorder, iStart, i - 1, m);
        root->right = helper(preorder, pStart + i - iStart + 1, pEnd, inorder, i + 1, iEnd, m);
        return root;
        
    }
};