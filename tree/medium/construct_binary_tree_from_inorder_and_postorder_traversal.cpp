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
    int postIndex;
    unordered_map<int,int> map;
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int left,int right)
    {
        if(left>right)
        {
            return NULL;
        }
        int val=postorder[postIndex--];

        TreeNode* root = new TreeNode(val);
        int index=map[val];

        root->right=solve(inorder,postorder,index+1,right);
        root->left=solve(inorder,postorder,left,index-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int n=postorder.size();
        postIndex=n-1;
        for(int i=0;i<n;i++)
        {
            map[inorder[i]]=i;
        }
        return solve(inorder,postorder,0,n-1);
    }
};
