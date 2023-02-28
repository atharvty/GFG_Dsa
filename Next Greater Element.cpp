class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> arr1(n);
        stack<long long> stk;
        for(int i = n-1;i>=0;i--){
            while(!stk.empty() && stk.top() <= arr[i]){
                stk.pop();
            }
            if(stk.empty() == false){
                arr1[i]=stk.top();
            }
            else{
                arr1[i]= -1;
            }
            stk.push(arr[i]);
        }
    return arr1;
    }
};
