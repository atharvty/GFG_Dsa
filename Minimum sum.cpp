//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
         sort(arr, arr+n, greater<int>());
        string ans;
        int sum=0, carry=0;
        for(int i=0;i<n;){
            int sum=arr[i]+carry;
            i++;
            if(i<n){
            sum+=arr[i];
            i++;
            }
            if(sum>=10) carry=1;
            else carry=0;
            ans.push_back('0'+sum%10);
        }
        if(carry) ans.push_back('1');
            while(ans.back()=='0'){
                ans.pop_back();
            }
        reverse(ans.begin(), ans.end());
        return ans;
        // code here
    }
};
