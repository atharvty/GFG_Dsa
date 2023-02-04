class Solution
{
    public:
    void sort012(int arr[], int n)
    {
int high=n-1;
    int low=0;
    int mid=0;

    while(high>=mid) {
        switch(arr[mid]) {
        case 0:
            swap(arr[mid++],arr[low++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
return;
    }
    
};
