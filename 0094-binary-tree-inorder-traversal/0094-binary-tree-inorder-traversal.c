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
void Inorder(struct TreeNode* root, int* arr, int* returnSize){
    if(root != NULL){
        Inorder(root->left, arr, returnSize);
        arr[(*returnSize)++] = root->val;
        Inorder(root->right, arr, returnSize);        
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = (int*)malloc(sizeof(int)*100);
    *returnSize = 0;
    
    Inorder(root, arr, returnSize);
    arr = realloc(arr, sizeof(int)*(*returnSize));
    
    return arr;
    
}