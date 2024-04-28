// Refer to https://leetcode.com/problems/leaf-similar-trees/discuss/4534561
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode* node, int** leafValue, int* size, int* c){
    if(node == NULL)
        return;
    
    if (node->left == NULL && node->right == NULL) {
        if (*size >= *c) {
            *c *= 2;
            *leafValue = (int*) realloc(*leafValue, *c * sizeof(int));
        }
        (*leafValue)[(*size)++] = node->val;
    }
    
    dfs(node->left, leafValue, size, c);
    dfs(node->right, leafValue, size, c);
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int *leave1 = (int*) malloc(sizeof(int) * 10);
    int *leave2 = (int*) malloc(sizeof(int) * 10);
    int size1 = 0, size2 = 0, c1 = 10, c2 = 10; // capacity
    
    dfs(root1, &leave1, &size1, &c1);
    dfs(root2, &leave2, &size2, &c2);    

    // printf("%d %d\n",size1, size2);
    if(size1 != size2){
        free(leave1);
        free(leave2);
        return 0;
    }    
    for(int i=0; i<size1; i++){
        // printf("%d %d\n",leave1[i], leave2[i]);
        if(leave1[i] != leave2[i]){
            free(leave1);
            free(leave2);
            return 0;
        } 
    }
    free(leave1);
    free(leave2);
    return 1;
}