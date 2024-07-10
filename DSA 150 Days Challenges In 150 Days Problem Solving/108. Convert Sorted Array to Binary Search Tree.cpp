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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
            if(nums.empty()) return NULL;
            TreeNode* root = new TreeNode(nums[nums.size() / 2]);
            vector<int>left(nums.begin(), nums.begin() + nums.size() / 2);
            vector<int>right(nums.begin() + nums.size() / 2 + 1, nums.end());
            root->left = sortedArrayToBST(left);
            root->right = sortedArrayToBST(right);
            return root;
    }
};
        
    
