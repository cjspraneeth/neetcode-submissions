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
    int depth(TreeNode* root,int &ans){
        if(root==nullptr){
            return 0;
            
        }
        int depthLeft = 0;
        int depthRight = 0;
        if(root->left != nullptr){
            depthLeft = depth(root->left,ans);
        }
        if(root->right != nullptr){
            depthRight = depth(root->right,ans);
        }
        ans= max(ans,depthLeft+depthRight);
        return 1+(max(depthLeft ,depthRight));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans =0;
        int depthOfRoot =depth(root,ans);
        // cout<<depthOfRoot<<endl;
        return ans;
    }
};