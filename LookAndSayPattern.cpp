class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        if(n==1)return "1";
        int cnt=1;
        string str="1";
        while(cnt<n){
            int count=1;
            string ans="";
            for(int i=1;i<str.length();i++){
                if(str[i]!=str[i-1])
                {
                    ans.push_back('0'+count);
                    ans.push_back(str[i-1]);
                    count=1;
                }
                else count++;
            }
            ans.push_back('0'+count);
            ans.push_back(str[str.length()-1]);
            str=ans;
            cnt++;
        }
        return str;
    }   
};
