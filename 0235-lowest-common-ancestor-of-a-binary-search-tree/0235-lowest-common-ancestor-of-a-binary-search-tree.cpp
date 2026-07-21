/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return nullptr;
        if(p->left == q || p->right == q) return p;
        if(q->left == p || q->right == p) return q;
        
        int minn = min(p->val , q->val);
        int maxx = max(p->val , q->val);
        TreeNode* temp = root;
        while(!( minn <= temp->val && maxx>= temp->val) || temp == nullptr){
            if(temp->val > maxx){
                temp = temp->left;
            }
            else if(temp->val < minn){
                temp = temp->right;
            }
        }
        return temp;
    }
};