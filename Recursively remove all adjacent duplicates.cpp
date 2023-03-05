//User function template for C++

class Solution
{
public:
    string rremove(string s)
    {
        string ans;

        int i = 0;
    
        while(s[i] != '\0')
        {
            if(s[i] != s[i+1] && s[i] != s[i-1]) ans += s[i];
            i++;
        }
    
        if (ans.size() == s.size()) return ans;
    
        return rremove(ans);
    }
};
