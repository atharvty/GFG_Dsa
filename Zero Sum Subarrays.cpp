class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        map<int,int>mp;
        int count=0;
        long long sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=arr[i];
            if (sum==0)
            {
                count++;
            }
            if (mp.find(sum)!=mp.end())
            {
                count+=mp[sum];
            }
            mp[sum]++;
        }
        return count;
    }
};
