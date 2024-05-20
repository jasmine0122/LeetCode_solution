/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void PreOrder(struct TreeNode* root, int* arr, int* returnSize){
    if(root != NULL){
        arr[(*returnSize)++] = root->val;
        PreOrder(root->left, arr, returnSize);
        PreOrder(root->right, arr, returnSize);        
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = (int*)malloc(sizeof(int)*100);
    *returnSize = 0;
    
    PreOrder(root, arr, returnSize);
    arr = realloc(arr, sizeof(int)*(*returnSize));
    
    return arr;       
}