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
    int height(TreeNode* root ){
        if(root == NULL ) return 0 ; 

        int lh = height(root->left);
        int rh = height(root->right) ;
        return  1 + max(lh , rh );
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // ans is in l 
        // or in right 
        // or both + 1 
        if(root== NULL ) return 0 ;

        int rh = diameterOfBinaryTree(root->right) ;
        int lh = diameterOfBinaryTree(root->left)  ;
        int treeh = height(root->left ) + height(root->right) ;

        return max( treeh , max(rh , lh ) ) ;
    }
};