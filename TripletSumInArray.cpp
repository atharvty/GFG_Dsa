//Three pointer approach for this one TC - O(N^2) but SC - O(1).
//Sort the array and arr[i] + left which is pointing to i+1 and right which is pointing to n-1.
//if the sum of all three pointers is less than x then left++ else right--.


class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int x)
    {
        if(n <=2)
            return false;
            
        int j, k;
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++){
            j = i+1;
            k = n-1;
            
            while(j<k){
                if(arr[i] + arr[j] + arr[k] == x)
                    return true;
                else if(arr[i] + arr[j] + arr[k] < x)
                    j++;
                else
                    k--;
            }
            
            
        }
        
       return false;
    }

};
