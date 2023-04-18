//User function Template for C++

class Solution {
public:
    int mini = INT_MAX;
    bool bst(Node *root, int minval, int maxval){
        if(root==NULL) return true;
        if(root->data<minval || root->data>maxval) return false;
        return bst(root->left, minval, root->data-1) && bst(root->right, root->data+1, maxval);
    }
    int fun(Node *root, int &count){
        if(root==NULL) return 0;
        count++;
        return root->data+fun(root->right, count)+fun(root->left, count);
    }
    void solve(int target, Node *root){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL && root->data==target){
            mini = 1;
            return;
        }
        if(bst(root, INT_MIN, INT_MAX)){
            int count = 0;
            int sum = fun(root, count);
            if(sum==target) mini = min(mini, count);
        }
        solve(target, root->left);
        solve(target, root->right);
    }
    int minSubtreeSumBST(int target, Node *root) {
        // code here
        solve(target, root);
        if(mini == INT_MAX ) return -1;
        return mini;
    }
};
