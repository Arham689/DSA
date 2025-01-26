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
    vector<string> temp  ;
    void inorder(TreeNode* root , string s  ){
        if(root == NULL ) return ;

        int item = root->val ; 

        if(!s.empty()) s += "->";

        s += to_string(item)  ;

        if(root->left == NULL && root->right == NULL ) temp.push_back(s) ; 

        inorder(root->left , s );

        inorder(root->right , s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        temp.clear() ; 
        inorder(root , "");
        return temp ; 
    }
};