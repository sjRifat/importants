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
    bool hasPathSum(TreeNode* root, int ts) {
        if(!root) return false;
        if(root->val==ts and !root->left and !root->right) return true;
        int tgt=ts-root->val;
        return hasPathSum(root->left,tgt) or hasPathSum (root->right,tgt);
    }
};
