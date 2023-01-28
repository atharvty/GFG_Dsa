//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        int i,j;
        vector<int>res;
        res.push_back(1);
        for(i=2;i<=N;i++)
        {
            int carry=0;
            for(j=res.size()-1;j>=0;j--)
            {
                int val = res[j]*i + carry;
                res[j]=val%10;
                carry=val/10;
            }
            while(carry>0)
            {
                res.insert(res.begin(),carry%10);
                carry/=10;
            }
        }
        return res;
    }
};
