/*Brute force - calculate max left for each array and then do calculation 

Another approach can be to get prefix and suffix sum for each and do the calculations 

MOST OPTIMAL 

Two pointer approach 

left[arr] and right[arr]

and maxleft , maxright 

if left[arr]≤ right[arr] 

then only if left[arr] < maxleft

ans+= maxleft-arr[left]

else

only if right[arr] < maxright

ans+= maxright - arr[right]*/
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
       long long int ans=0;
        int left[n];
        int right[n];
        left[0]=arr[0];
        for(int i=1;i<n;i++)
        {
           left[i]=max(left[i-1],arr[i]);
        }
        right[n-1]=arr[n-1];
        for(int i =n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],arr[i]);
        }
        for( int i=0;i<n;i++)
        ans=ans+(min(left[i],right[i]))-arr[i];
        return ans;
    }
};
