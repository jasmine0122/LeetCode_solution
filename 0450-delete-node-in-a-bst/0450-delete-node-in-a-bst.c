/**
處理左右子節點都存在的情況，需要在右子樹找到最小值，也就是右子樹中最左下方的節點，
然後將該最小值賦值給root，然後在右子樹中呼叫遞歸函數來刪除這個值最小的節點
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root == NULL)
        return root;
    if(root->val > key){
        root->left = deleteNode(root->left, key);
    }
    else if(root->val < key){
        root->right = deleteNode(root->right, key);
    }
    else{
        if(root->right == NULL){
            root = root->left;
        }
        else if(root->left == NULL){
            root = root->right;
        }
        else{
            struct TreeNode *cur = root->right;
            while (cur->left){
                cur = cur->left;                
            }
            root->val = cur->val;
            root->right = deleteNode(root->right, cur->val);
        }
    }
    return root;
}