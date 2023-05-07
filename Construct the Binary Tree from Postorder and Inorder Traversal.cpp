

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
 Node* buildt(int in[],int post[],int &idx,int ins,int ine,int n,unordered_map<int,int> &mp)
    {
        if(idx<0 || ins>ine)
        return NULL;
        
        Node* node=new Node(post[idx]);
        
         int k=mp[post[idx]];
        idx--;
       
         node->right=buildt(in,post,idx,k+1,ine,n,mp);
        node->left=buildt(in,post,idx,ins,k-1,n,mp);
        
     
        
        return node;
        
       
    }
    
Node *buildTree(int in[], int post[], int n) {
    
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        mp[in[i]]=i;

        int idx=n-1;
      return buildt(in,post,idx,0,n-1,n,mp);
        
       
}
