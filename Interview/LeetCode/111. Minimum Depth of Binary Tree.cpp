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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int sz=q.size();
            int zz=sz;
            c++;
            while(zz--){
                auto ft=q.front();
                q.pop();
                if(!ft->left and !ft->right) return c;
                if(ft->left) q.push(ft->left);
                if(ft->right) q.push(ft->right);
            }
        }
        return c;
    }
};
