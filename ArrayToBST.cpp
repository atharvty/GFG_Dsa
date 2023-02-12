class Solution {
public:
void solve(vector<int>& v ,vector<int> &ans,int s,int e){
    
    if(s>e){
        return;
    }
    int mid=(s+e)/2;
    
    ans.push_back(v[mid]);
    
    solve(v,ans,s,mid-1);
    
    solve(v,ans,mid+1,e);
    
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
       vector<int> ans;
       vector<int> v=nums;
         solve(v,ans,0,nums.size()-1);
         return ans;
    }
};
