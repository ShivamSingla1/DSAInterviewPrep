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
    int depth(TreeNode *root, int &ans) {
        if(!root)return 0;
        int ld=1+depth(root->left, ans);
        int rd=1+depth(root->right, ans);
        ans=max(ans,ld+rd-2);
        return max(ld, rd);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        depth(root, ans);
        return ans;
    }
};