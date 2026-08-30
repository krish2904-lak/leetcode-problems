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
    void check(TreeNode* root, vector<int>&res){
        if(root==NULL)
        return;   
        check(root->left,res);
        res.push_back(root->val);
        check(root->right,res);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>res;
        check(root,res);
        int left=0;
        int right=res.size()-1;
        while(left<right){
            int sum=res[left]+res[right];
            if(sum==k){
            return true;
            }

            else if(sum<k){
            left++;
            }

            else{
            right--;
            }
        }
        return false;

    }
};