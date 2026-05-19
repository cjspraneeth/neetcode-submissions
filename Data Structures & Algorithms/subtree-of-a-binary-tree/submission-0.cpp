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
    bool issame(TreeNode* root1 , TreeNode* root2){
        if(root1 == nullptr && root2 == nullptr){
            return true;
        }
        if(root1 != nullptr && root2 == nullptr){
            return false;
        }
        if(root1 == nullptr && root2 != nullptr){
            return false;
        }
        
        if(root1->val != root2->val){
            return false;
        }
        else{

            return issame(root1->left,root2->left) && issame(root1->right,root2->right);
        }
    }
    bool dfs (TreeNode* root1,TreeNode* root2){
        if(root1==nullptr){
            return false;
        }
        else if(issame(root1,root2)){
            // cout<<root1->val <<" "<<root2->val<<endl;
            return true;
        }
        else{
                        // cout<<root1->val <<" "<<root2->val<<endl;

            return dfs(root1->left,root2) || dfs(root1->right,root2);
        }
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return dfs(root,subRoot);
    }
};