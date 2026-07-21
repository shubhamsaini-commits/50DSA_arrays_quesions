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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        if (root == nullptr) return {};
        q.push(root);
        vector<vector<int>> ans;
        TreeNode* thisNode;
        while(!q.empty()){
            int thisLevel = q.size();
        vector<int> current;
            for(int i = 0; i < thisLevel; i++){
                thisNode = q.front();
                q.pop();
                current.push_back(thisNode->val);
                if (thisNode->left != nullptr) q.push(thisNode->left);
                if (thisNode->right != nullptr) q.push(thisNode->right);
            }
            ans.push_back(current);
            // current.clear();
        }
        return ans;
    }
};