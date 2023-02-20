/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    info solve(Node*root,int &maxSize)
    {
        if(!root){
            return {INT_MIN,INT_MAX,true,0};
        }
        
        info left=solve(root->left,maxSize);
        info right=solve(root->right,maxSize);
        
        info currNode;
        
        currNode.size=left.size+right.size+1;
        currNode.maxi=max(root->data,right.maxi);
        currNode.mini=min(left.mini,root->data);
        
        if(left.isBST && right.isBST && root->data>left.maxi && root->data<right.mini){
            currNode.isBST=true;
        }
        else  currNode.isBST=false;
        
        if(currNode.isBST){
            maxSize=max(maxSize,currNode.size);
        }
        
        return currNode;
    }
    
    int largestBst(Node *root)
    {
    	//Your code here
    	int maxSize=0;
    	info temp=solve(root,maxSize);
    	return maxSize;
    }
};
