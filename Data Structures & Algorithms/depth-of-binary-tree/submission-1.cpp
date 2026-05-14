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
    void dfs (TreeNode* root , int &ans,int start, unordered_map<TreeNode*,int>& m){
        if(root== nullptr){
            return;
        }
        start = start +1;
        m[root]=start;
        cout<<root->val<<" "<<start<<endl;
        ans = max(ans,start);
        if(root ->left !=nullptr && m[root->left]==0){
            dfs(root->left,ans,start,m);
        }
        if(root ->right !=nullptr && m[root->right]==0){
            dfs(root->right,ans,start,m);
        }

    }

    int maxDepth(TreeNode* root) {        
        int ans = 0;
        int start =0;
        unordered_map<TreeNode*,int>m;
        dfs(root,ans,start,m);
        return ans;
        
    }
};