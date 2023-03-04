// User Fuction template for C++

class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    
    int f(Node* node,int &maxi){
        if(node==NULL) return 0;
        int maxL=max(0,f(node->left,maxi));
        int maxR=max(0,f(node->right,maxi));
        maxi=max(maxi,maxL+maxR+node->data);
        return max(maxL,maxR) + node->data;
    }
    int findMaxSum(Node* root)
    {
        int maxi=INT_MIN;
        int a= f(root,maxi);
        return maxi;
    }
};
