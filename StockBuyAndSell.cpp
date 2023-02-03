

// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here

    int cnt=0;
    bool check=true;
    for(int i=0;i<n-1;i++)
    {
        if(price[i]>price[i+1])
        {
          
          if(cnt!=i)
          {
              cout<<"("<<cnt<<" "<<i<<") ";
              check=false;
          }
          cnt=i+1;
          
        }
    }
    if(price[n-1]>price[n-2] && cnt!=n-1)
    {
        cout<<"("<<cnt<<" "<<n-1<<") ";
        check=false;
    }
    if(check)
    {
        cout<<"No Profit";
    }
    cout<<endl;
}
