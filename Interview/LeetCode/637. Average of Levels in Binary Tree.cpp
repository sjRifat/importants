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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            double sum=0;
            int sz=q.size();
            int zz=sz;
            while(sz--){
                auto frnt=q.front();
                sum+=frnt->val;
                q.pop();
                if(frnt->left) q.push(frnt->left);
                if(frnt->right) q.push(frnt->right);
            }
            ans.push_back(sum/zz);
        }
        return ans;
    }
};
