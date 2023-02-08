/*Do a vertical line traversal and only print the first element forget about the other elements in the line

Start by making a map and queue.

push the root node in the queue

and till the queue gets empty 

{

get the node and line 

if the mp[line] ≠ mp.end() push it into the map 

else dont push

keep in adding node→left , line-1

node→right line+1

}

in the end push all the items of the map in your vector and you will have your answer*/


class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        
        map<int,int> mp;
        if(!root) return {};
        queue<pair<Node *, int>> q ;
        
        q.push({root,0});
        
        mp[0] = root->data;
        
        while(!q.empty())
        {
            auto front = q.front(); q.pop();
            auto nd = front.first;
            int ln = front.second;
            
            if(mp.find(ln) == mp.end()) mp[ln] = nd->data;
            
            if(nd->left) q.push({nd->left,ln-1});
            if(nd->right) q.push({nd->right,ln+1});
        }
        vector<int> v;
        for(auto i : mp)
        {
            v.push_back(i.second);
        }
        return v;
    }

};
