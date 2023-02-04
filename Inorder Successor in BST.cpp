/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    void solve(Node* root,vector<Node*>&s){
        if(root==NULL)
          return;
        solve(root->left,s);
        s.push_back(root);
        solve(root->right,s);
        
    }
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        vector<Node*>s;
        solve(root,s);
        bool flag=false;
        for(auto m:s){
            if(flag){
                return m;
            }
            if(m==x){
               flag=true; 
            }
            
        }
        return NULL;
    }
};
