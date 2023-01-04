class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& v) {
         // Code here
         vector<vector<int>> ans;
         vector<int> ele;
         
         sort(v.begin(),v.end());
         
         ele.push_back(v[0][0]);
         ele.push_back(v[0][1]);
          
         for(int i=1;i<v.size();i++)
         {
             if(ele[1]>=v[i][0])
             {
                 ele[1]=max(ele[1],v[i][1]);
             }
             else
             {
                 ans.push_back(ele);
                 
                 
                 ele[0]=v[i][0];
                 ele[1]=v[i][1];
                 
                 
             }
             
         }
         ans.push_back(ele);
         
         return ans;
    }
};
