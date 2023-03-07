

// Function to delete a node from BST.
Node* sol(Node* root){
    Node* t=root;
    while(t->right!=NULL){
        t=t->right;
    }
    return t;
}
Node *deleteNode(Node *root, int x) {
    // your code goes here
    if(root==NULL)
    return root;
    if(x<root->data)
      root->left=deleteNode(root->left,x);
    else if(x>root->data)
       root->right=deleteNode(root->right,x);
       else{
           if(root->left==NULL){
               Node* t=root->right;
               return t;
           }
           else{
               Node* r=sol(root->left);
               r->right=root->right;
               root->right=NULL;
               return root->left;
           }
       }
       return root;
    
}
