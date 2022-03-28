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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int D = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){ //BFS
            int Q = q.size();
            
            for(int i=0; i<Q; i++){
                TreeNode* F = q.front();
                q.pop();
                if(F->left){
                    q.push(F->left);
                    //cout<<"Left: "<<F->left->val<<endl;
                }
                if(F->right){
                    q.push(F->right);
                    //cout<<"Right: "<<F->right->val<<endl;
                }
            }
            D++;
        }
        return D;
    }
};