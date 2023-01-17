class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node*temp=q.front().first;
            int level=q.front().second;
            q.pop();
            m[level]=temp->data;
            if(temp->left){
                q.push({temp->left,level-1});
            }
            if(temp->right){
                q.push({temp->right,level+1});
            }
        }
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
};
