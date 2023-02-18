class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        bool isNeg = false;
        if (str[0] == '-')
        {
            isNeg = true;
            str.erase(0, 1);
        }
        for(int i = 0 ; i < str.size() ; i++)
            if (str[i] < '0' || str[i] > '9')
                return -1;
        int ans = 0;
        while(!str.empty())
        {
            ans = ans * 10 + str[0] - '0';
            str.erase(0, 1);
        }
        if (isNeg)
            ans *= -1;
        return ans;
    }
};
