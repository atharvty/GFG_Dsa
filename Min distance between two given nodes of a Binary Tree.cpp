/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    Node* lca(Node* root, int a, int b) {
        if (!root || root -> data == a || root -> data == b)
            return root;
            
        Node* left = lca(root -> left, a, b);
        Node* right = lca(root -> right, a, b);
        
        if (left and right)
            return root;
        if (left)
            return left;
        return right;
    }
    
    int distanceFromLCA(Node* root, int node) {
        if (!root)
            return 0;
            
        if (root -> data == node)
            return 1;
            
        int left = distanceFromLCA(root -> left, node);
        int right = distanceFromLCA(root -> right, node);
        if (!left and !right)
            return 0;
        return left + right + 1;
    }
    
    int findDist(Node* root, int a, int b) {
        Node* LCA = lca(root, a, b);
        return distanceFromLCA(LCA, a) + distanceFromLCA(LCA, b) - 2;
    }
};
