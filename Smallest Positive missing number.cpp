
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int brr[100000] = {0};
        for(int i = 0;i<n;i++){
            if(arr[i] > 0){
                brr[arr[i]] = 1;
            }
        }
        for(int i=1;i<100000;i++){
            if( brr[i] == 0){
                return i;
            }
        }
    } 
};
