class Solution {
public:
    bool canwePlace(vector<int>&stalls,int dist , int cows ){
        int cntCows = 1 , last = stalls[0];
        //we automatically place the first cow at first index and start looking for other
        for(int i = 1 ; i < stalls.size() ; i++){
            if(stalls[i] - last >= dist){
                cntCows++;
                last = stalls[i];
            }
            if(cntCows>= cows) return true;
            
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin() ,stalls.end());
        int low = 1 , high = stalls[n-1] - stalls[0];
        int ans = 1;
        //no of possiblities for the answer
        // 1 2 3 4 5 6 7 8
        // l             h
        while(low<=high){
            int mid = (low+high)/2;
            if(canwePlace(stalls, mid , k ) == true){
                //if we can place for the mid suppose 4 so we can try for
                // a bigger number as well
                ans = max(ans, mid);
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans ;

    }
};
