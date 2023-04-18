class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
            vector<int>ans;
            int n=pat.size(),m=txt.size();
            for(int i=0;i<m-n+1;i++){
                if(txt.substr(i,n)==pat){
                    ans.push_back(i+1);
                }
            }
            if(ans.empty()){
                ans.push_back(-1);
            }
            return ans;
        }
     
};
