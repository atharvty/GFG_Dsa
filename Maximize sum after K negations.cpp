class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long int czero=0,i,res=0,neg=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                czero++;
            else if(a[i]<0)
                neg++;
            
        }
        if(neg<=k)
        {
            for(i=0;i<neg;i++)
            {
                a[i]=-a[i];
            }
            sort(a,a+n);
            k-=neg;
            if(k%2!=0)
            {
               a[0]=-a[0]; 
            }
        }
        else
        {
           for(i=0;i<k;i++)
           {
               a[i]=-a[i];
           }
        }
        for(i=0;i<n;i++)
            res+=a[i];
        return res;
    }
};
