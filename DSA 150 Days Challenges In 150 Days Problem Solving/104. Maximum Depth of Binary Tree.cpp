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
    int maxDepth(TreeNode* root) {

       // LETS'S SRART
    // THIS IS BASE CASE
   // HERE FUNCTION CHEK IF THE ' ROOT ' NODE IS NULLPTR OR NOT  
       if (!root) return 0;


  //  AND SECOND LOGIC USED HERE RECURSIVE CASE 
        // max(maxDepth(root->left))
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;


        
    }
};