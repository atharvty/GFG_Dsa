class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
        vector<int> LIS;
        for(int i=0;i<N;i++){
            auto ind = lower_bound(LIS.begin(), LIS.end(), H[i])-LIS.begin();
            if(ind == LIS.size()){
                LIS.push_back(H[i]);
            }
            else    LIS[ind] = H[i];
        }
        
        return N-LIS.size();
    }
};
