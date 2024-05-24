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
    int maxLevelSum(TreeNode* root) {
        int Max = INT_MIN;
        int level = 0, count = 0;
        queue<TreeNode*> node;
        
        node.push(root);
        
        while(!node.empty()){
            int n = node.size();
            int sum = 0;
            count++;
            for(int i=0; i<n; i++){
                TreeNode* tmp = node.front();
                node.pop();
                sum += tmp->val;
                
                if(tmp->left)
                    node.push(tmp->left);
                if(tmp->right)
                    node.push(tmp->right);
            }
            if(sum > Max){
                Max = sum;
                level = count;
            } 
        }
        return level;
    }
};