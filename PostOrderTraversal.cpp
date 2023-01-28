void postorder(vector<int>&v,Node *root)
{
    if(root==NULL)
    return;
    postorder(v,root->left);
    postorder(v,root->right);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
    vector<int>v;
     postorder(v,root);
     return v;
}
