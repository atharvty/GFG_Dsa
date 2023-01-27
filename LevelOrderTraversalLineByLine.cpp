

/* A binary tree Node

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

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
    vector<vector<int>>ans;
    queue<Node*>q;
    q.push(node);
    
    while(!q.empty()){
        vector<int>v;
        int size = q.size();
        
        for(int i = 0; i < size; i++){
            Node *curr = q.front();
            q.pop();
            
            if(curr -> left){
                q.push(curr -> left);
            }
            if(curr -> right){
                q.push(curr -> right);
            }
            v.push_back(curr -> data);
        }
        ans.push_back(v);
    }
    return ans;
}
