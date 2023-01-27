class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        stack<int>stk;
        int root=INT_MIN;
        for(int i=0;i<N;i++)
        {
            while(!stk.empty() && arr[i]>stk.top())
            {
                root=stk.top();
                stk.pop();
            }
            if(arr[i]<root)
            {
                return 0;
            }
            stk.push(arr[i]);
        }
        
        return 1;
    }
};
