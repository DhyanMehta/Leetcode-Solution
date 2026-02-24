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
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }

private:
    int dfs(TreeNode* root,int currValue){
        if(root==NULL) return 0;

        currValue=currValue*2+root->val;

        if(root->left==NULL && root->right == NULL) return currValue;

        return dfs(root->left,currValue)+ dfs(root->right, currValue);
    }
};