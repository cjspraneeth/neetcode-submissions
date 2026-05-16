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
    int depth(TreeNode* root, bool &ans) {
        if (root == nullptr) {
            return 0;
        }
        int depthLeft = depth(root->left, ans);
        int depthRight = depth(root->right, ans);
        bool iscorrect =(abs( depthLeft - depthRight) <= 1);
        ans = ans && iscorrect;
        return 1 + max(depthLeft, depthRight);
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        int depthRoot = depth(root,ans);
        return ans;
    }
};