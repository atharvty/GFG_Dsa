/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool isidentical(Node*t,Node*s)
    {
        if(t==NULL&&s==NULL)
        {
            return true;
        }
        if(t==NULL||s==NULL)
        {
            return false;
        }
        return t->data==s->data  &&isidentical(t->left,s->left)  &&isidentical(t->right,s->right);
    }
    bool issubtree(Node*t,Node*s)
    {
        if(s==NULL)
        {
            return true;
        }
        if(t==NULL)
        {
            return false;
        }
        if(isidentical(t,s))
        {
            return true;
        }
        return issubtree(t->left,s)||issubtree(t->right,s);
    }
    bool isSubTree(Node* t, Node* s) 
    {
        // Your code here
        if(issubtree(t,s))
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
