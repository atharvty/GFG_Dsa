class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int res=arr[0];
        int s=0,e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            res=min(res,arr[mid]);
            if(arr[mid]>arr[n-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return res;
    }
};
