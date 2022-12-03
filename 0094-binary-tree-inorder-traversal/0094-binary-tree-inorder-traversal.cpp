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
    vector<int>inOrder;
    
    void inOrderTr( TreeNode * root ) {
          if ( !root ){
                return;
          }
         inOrderTr(root->left);
         inOrder.push_back(root->val);
        inOrderTr(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
         if ( !root ) {
             return { };
         }
          inOrderTr(root);
         return inOrder; 
    }
    
};