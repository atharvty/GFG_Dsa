class Solution{
    public:
    int findSubString(string str)
    {
        unordered_map<char,int>m;
        set<char>st;
        for(int i=0;i<str.length();i++)
        {
            st.insert(str[i]);
        }
        int n=st.size();
        int i=0;
        int j=1;
        m[str[i]]++;
        int c=0;
        c++;
        int ans=INT_MAX;
        while(i<=j && j<str.length())
        {
            if(c<n)
            {
                if(m[str[j]]==0)
                {
                    c++;
                }
                m[str[j]]++;
                j++;
            }
            else if(c==n)
            {
                ans=min(ans,j-i);
                if(m[str[i]]==1)
                {
                    c--;
                }
                m[str[i]]--;
                i++;
            }
        }
        while(c==n)
        {
            ans=min(ans,j-i);
            if(m[str[i]]==1)
            {
                c--;
            }
            m[str[i]]--;
            i++;
        }
        return ans;
    }
};
