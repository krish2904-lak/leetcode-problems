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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
        return res;
        bool LeftToRight=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int lvl=q.size();
            vector<int>temp(lvl);
            for(int i=0;i<lvl;i++){
            TreeNode* t=q.front();
            q.pop();
            int idx=0;
            if(LeftToRight)
                idx=i;
             else
             idx=lvl-1-i;   
            temp[idx]=t->val;
            if(t->left!=NULL)
            q.push(t->left);
            if(t->right!=NULL)
            q.push(t->right);
            }
            res.push_back(temp);
            LeftToRight= !LeftToRight;
        }
                    return res;
    }
};