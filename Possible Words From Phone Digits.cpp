class Solution
{
    
    public:
    vector<string>ans;
    vector<string>keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void helper(int a[], string temp,int i, int N)
    {
        if(i ==N)
        {
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<keys[a[i]].size();j++)
        {
            helper(a,temp+keys[a[i]][j],i+1,N);
        }
       // return;
    }
    vector<string> possibleWords(int a[], int N)
    {
        //string temp="";
        helper(a,"",0,N);
        return ans;
    }
};
