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
    TreeNode* divide(vector<int>& nums, int L, int R){
        if(L <= R){
            int M = L+(R-L)/2;
            TreeNode* root = new TreeNode(nums.at(M));
            root->left = divide(nums, L, M-1);
            root->right = divide(nums, M+1, R);
            return root;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return divide(nums, 0, nums.size()-1);
    }
};