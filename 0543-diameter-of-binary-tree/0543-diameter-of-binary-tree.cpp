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
    
    int maxDepth(TreeNode *root){
        if(!root) return 0;
        
        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);
        
        int ans=max(leftHeight,rightHeight)+1;
        return ans;
        
     }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        
        int op1=diameterOfBinaryTree(root->left);
        
        int op2=diameterOfBinaryTree(root->right);
        
        int op3=maxDepth(root->left)+maxDepth(root->right);
        
        return max({op1,op2,op3});
        
    }
};