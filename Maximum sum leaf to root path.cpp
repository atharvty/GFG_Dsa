class Solution{
    public:
    void maxPathSumUtil(Node* root, int curr, int &ans){
        if(root == NULL){
            return;
        }
        curr += root->data;
        if(root->left == NULL && root->right == NULL){
            ans = max(ans, curr);
        }
        maxPathSumUtil(root->left, curr, ans);
        maxPathSumUtil(root->right, curr, ans);
    }
    int maxPathSum(Node* root)
    {
        int curr = 0;
        int ans = INT_MIN;
        maxPathSumUtil(root, curr, ans);
        return ans;
    }
};
