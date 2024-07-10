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
    int sumNumbers(TreeNode* root) {


        // BFS Using (Breath Frist Search ) Using

        if(!root) return 0;
        int res = 0;
        queue<pair<TreeNode*, int>>q;
        q.push({root, 0});
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int num = p.second * 10 + p.first->val;
            if(p.first->left) q.push({p.first->left, num});
            if(p.first->right) q.push({p.first->right, num});
            if(!p.first->left && !p.first->right) res += num;
        }
        return res;
        
    }
};