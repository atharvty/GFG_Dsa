/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int low=0, high=n-1;
       while(low<high){
           
           int mid = (low + high) >> 1;
            if(arr[mid] > arr[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
           /*int mid = (low+high)/2;
           
            if(mid==0){
               return arr[0]>=arr[1]?arr[0]:arr[1];
            }   
            if(mid==n-1){
                return arr[n-1]>=arr[n-2]?arr[n-1]:arr[n-2];
            }
            
            if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]) return mid;
               
            if(arr[mid]<arr[mid-1]) high=mid-1;
            else low=mid+1;
        }
        return low;*/
    }
};
