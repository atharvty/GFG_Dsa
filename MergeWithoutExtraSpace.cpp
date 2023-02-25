class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int gap = ceil((float)(n+m)/2);
            while(gap > 0) {
                int i=0,j=gap;
                while(j<(n+m)) {
                    if(j<n and arr1[i] > arr1[j]) {
                        swap(arr1[i],arr1[j]);
                    }
                    else if(j>=n and i<n and arr1[i] > arr2[j-n]) {
                        swap(arr1[i],arr2[j-n]);
                    }
                    else if(j>=n and i>=n and arr2[i-n] > arr2[j-n]) 
                        swap(arr2[i-n],arr2[j-n]);
                    i++;
                    j++;
                }
                if(gap == 1)
                    gap = 0;
                else 
                    gap = ceil((float)gap/2);
            }
        } 
};
