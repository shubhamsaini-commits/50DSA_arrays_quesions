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
    bool help(TreeNode* root , long long left  , long long right){
        if(root == nullptr) return true;

        if(root->val <= left || root->val >= right) return false;

        return help(root->left , left , root->val) && help(root->right , root->val , right);

    }

public:
    bool isValidBST(TreeNode* root) {
        if(root == nullptr || (root->left == nullptr && root->right == nullptr) ){
            return true;
        }
        long long low = LLONG_MIN;
        long long high = LLONG_MAX;
        return help(root , low , high);
    }
};