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

    bool isSame = true;

    void solve(TreeNode* p, TreeNode* q){
        if(!p && q){
            isSame = false;
            return;
        }
        else if(p && !q){
            isSame = false;
            return;
        }
        else if(p && q){
            if(p->val != q->val){
                isSame = false;
                return;
            }else{
                solve(p->left, q->left);
                solve(p->right, q->right);
            }
        }
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        solve(p, q);
        return isSame;
    }
};