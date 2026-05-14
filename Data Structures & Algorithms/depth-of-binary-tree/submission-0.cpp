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
    int maxDepth(TreeNode* root) {
        if(root ==nullptr){
            return 0;
        }
        queue<TreeNode*> bucket;
        unordered_map<TreeNode*,int>m;
        m[root]=1;
        bucket.push(root);
        int ans = 1;
        while(bucket.size()!=0){
            TreeNode* top = bucket.front();
            bucket.pop();
            
            if(top !=nullptr  && top->left != nullptr){
                m[top->left]= m[top]+1;
                ans = max(ans,m[top->left]);
                bucket.push(top->left);

            }
            if(top !=nullptr && top->right != nullptr){
                m[top->right]= m[top]+1;
                ans = max(ans,m[top->right]);
                bucket.push(top->right);

            }

        }
        return ans;
        
        
    }
};