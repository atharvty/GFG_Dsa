    

class Solution{
    //Function to find the leaders in the array.
    public:
    
    vector <int> ans;
    vector<int> leaders(int arr[], int n){
        
        int curr_max=arr[n-1];
        ans.push_back(arr[n-1]);
        
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=curr_max)
            {
                curr_max=arr[i];
                ans.push_back(curr_max);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
