class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int> ans;
      queue<Node*> q;
      q.push(node);
      while(!q.empty()){
          int size = q.size();
          
          for(int i=0;i<size;i++){
              Node* temp = q.front();
              q.pop();
              ans.push_back(temp->data);
              if(temp->left != NULL) q.push(temp->left);
              if(temp->right != NULL) q.push(temp->right);
          }
      }
      return ans;
    }
};
