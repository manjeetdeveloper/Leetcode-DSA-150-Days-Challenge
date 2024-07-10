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
    vector<TreeNode*> generateTrees(int n) {

        // IF N IS 0, RETURN AN EMPTY VECTOR AS THERE NO  THREE TO GEENRTAE
        if(n == 0) return {};

        //USE A HELPER FUNC TO GENETRATE TREE FROM VALUE 1 T0 N
        return DFS(1, n);


    }

    vector<TreeNode*> DFS(int l, int r) {
        vector<TreeNode*>res;

        //BASE CASE : IF L > R, RTETURN A VECRTYIOR CONTAINING A SINGLE NULL POINTER
        if(l > r) return {NULL};

        //ITERATE  ALL VALUE FROM L TO R TOCONSIDER EEACH AS THE WORK
        for(int i = l; i <= r; i++){

            //REURESIVELY GENTRATE LEFT AND RIGHT SUBTREE WITH VALUE LESS THAN AND GREATER THAN 1
            auto left = DFS(l, i-1);
            auto right = DFS(i + 1, r);

            //COMBINE EACH L SUBTREE AND RIGHT ASSIGN i AS THE ROOT
            for(auto x: left)
            for(auto y: right){
                TreeNode* root = new TreeNode(i);
                root->left = x;
                root->right = y;
                res.push_back(root);
            }
        }

        return res;
    }
};