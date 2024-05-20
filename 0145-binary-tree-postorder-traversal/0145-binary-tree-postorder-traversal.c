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
void PostOrder(struct TreeNode* root, int* arr, int* returnSize){
    if(root != NULL){
        PostOrder(root->left, arr, returnSize);
        PostOrder(root->right, arr, returnSize);
        arr[(*returnSize)++] = root->val;        
    }
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = (int*)malloc(sizeof(int)*100);
    *returnSize = 0;
    
    PostOrder(root, arr, returnSize);
    arr = realloc(arr, sizeof(int)*(*returnSize));
    
    return arr;
}