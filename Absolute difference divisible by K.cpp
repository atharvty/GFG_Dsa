//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
         map<int, int>mp;

        for(int i=0; i<n; i++){

            arr[i]=arr[i]%k;

            mp[arr[i]]++;

        }

        long long ans=0;

        for(auto it:mp)

        ans+=(it.second*(it.second-1))/2;

        return ans;
    }
};
