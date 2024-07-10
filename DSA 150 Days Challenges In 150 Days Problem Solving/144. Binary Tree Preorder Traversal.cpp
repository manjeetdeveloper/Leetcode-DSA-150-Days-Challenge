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
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int>res;
        stack<TreeNode*>s;
        auto p = root;
        while(p || !s.empty())

        {
            if(!p) p = s.top(), s.pop();
            res.push_back(p->val);
            if(p->right) s.push(p->right);
            p = p->left;
        }
        
        return res;
        
    }
};