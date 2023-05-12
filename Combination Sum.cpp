//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int index, int target, vector<int> &A, vector<vector<int>> &ans, vector<int> &output){
        if(index== A.size()){
            if(target==0){
                ans.push_back(output);
            }
            return;
        }
        
        if(A[index]<=target){
            output.push_back(A[index]);
            solve(index,target-A[index],A,ans,output);
            output.pop_back();
        }
        
        solve(index+1,target,A,ans,output);
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> ans;
        vector<int> output;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        solve(0,B,A,ans,output);
        // set<vector<int>> s;
        // for(auto i: ans){
        //     s.insert(i);
        // }
        // ans.clear();
        // for(auto i:s){
        //     ans.push_back(i);
        // }
        return ans;
    }
};
