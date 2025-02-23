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
TreeNode* dfs(int preStart, int postStart, int size, vector<int>& preorder, vector<int>& postorder) {

    if (size == 0) return nullptr;


    TreeNode* root = new TreeNode(preorder[preStart]);


    if (size == 1) return root;


    int leftVal = preorder[preStart + 1]; 
    int leftSize = 0;
    for (int i = postStart; i < postStart + size; i++) {
        if (postorder[i] == leftVal) {
            leftSize = i - postStart + 1;
            break;
        }
    }


    root->left = dfs(preStart + 1, postStart, leftSize, preorder, postorder);
    root->right = dfs(preStart + 1 + leftSize, postStart + leftSize, size - 1 - leftSize, preorder, postorder);

    return root;
}
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
       return  dfs(0 , 0 , preorder.size() , preorder , postorder) ;
    }
};