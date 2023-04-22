/*  Structure of a Binary Tree

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

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        int maxi=-1;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int siz=q.size();
            maxi=max(maxi,siz);
            
            for(int i=0;i<siz;i++)
            {
                Node* rot=q.front();
                q.pop();
                if(rot->left!=NULL)q.push(rot->left);
                if(rot->right!=NULL)q.push(rot->right);
            }
        }
        
        return maxi;
    }
};
