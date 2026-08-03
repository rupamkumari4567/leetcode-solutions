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
    vector<string> binaryTreePaths(TreeNode* root, string path="") {
        if(!root)
        return {};
        path+=to_string(root->val);
        if(!root->left && !root->right)
        return{path};
        vector<string>left=binaryTreePaths(root->left, path+"->");
                vector<string>right=binaryTreePaths(root->right, path+"->");
                left.insert(left.end(), right.begin(), right.end());
                return left;

        
    }
};