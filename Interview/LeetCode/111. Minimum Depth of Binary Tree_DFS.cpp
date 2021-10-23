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
    void DFS(TreeNode* root,int& mn,int lvl){
        if(!root) return;
        if(!root->left and !root->right){
            mn=min(mn,lvl);
            return;
        }
        
        DFS(root->left,mn,lvl+1);
        DFS(root->right,mn,lvl+1);
    }
    
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int mn=INT_MAX;
        DFS(root,mn,1);
        return mn;
    }
};
