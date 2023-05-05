void help(Node* root, int lvl, vector<int> &ans){
    if(root==NULL){
        return;
    }
    
    if(lvl==ans.size()){
        ans.push_back(root->data);
    }
    help(root->left, lvl+1, ans);
    help(root->right, lvl+1, ans);
}
vector<int> leftView(Node *root){
   vector<int> ans;
   help(root, 0, ans);
   return ans;
}
