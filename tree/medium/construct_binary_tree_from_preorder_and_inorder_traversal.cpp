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
    int preIndex=0;
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder , int left,int right)
    {   
        if(left>right)
        {
            return NULL;
        }
        auto it = find(inorder.begin(),inorder.end(),preorder[preIndex]);
        int index = distance(inorder.begin(),it);

        TreeNode* root = new TreeNode(preorder[preIndex]);
        preIndex++;

        root->left = solve(preorder,inorder,left,index-1);
        root->right = solve(preorder,inorder,index+1,right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int n=inorder.size();
        return solve(preorder,inorder,0,n-1);    
    }
};
