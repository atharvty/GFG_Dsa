
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(long long l,long long r,long long arr[],long long mid){
        long long inv=0;
        long long n1=mid-l+1;
        long long n2=r-mid;
        long long a[n1];
        long long b[n2];
        for(long long i=0;i<n1;++i){
            a[i]=arr[l+i];
        }
        for(long long i=0;i<n2;++i){
            b[i]=arr[mid+1+i];
        }
        long long i=0,j=0,k=l;
        
        while(i<n1&&j<n2){
            if(a[i]<=b[j]){
                arr[k]=a[i];
                i++;k++;
            }else{
                arr[k]=b[j];
                j++;k++;
                inv+=n1-i;
            }
        }
        
        while(i<n1){
             arr[k]=a[i];
                i++;k++;
        }
        while(j<n2){
             arr[k]=b[j];
                j++;k++;
        }
        return inv;
    }
    
    long long mergesort(long long l,long long r,long long arr[]){
        long long inv=0;
        if(l<r){
            int mid=l+(r-l)/2;
            inv+=mergesort(l,mid,arr);
            inv+=mergesort(mid+1,r,arr);
            inv+=merge(l,r,arr,mid);
        }
        
        return inv;
    }
    
    
     long long inversionCount(long long arr[], long long N)
    {
        if(N==1)return 0;
        return mergesort(0,N-1,arr);
    }

};
