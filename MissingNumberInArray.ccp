class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int start = 1;
        sort(array.begin(), array.end());
        for(int i=0;i<array.size();i++){
            if(start != array[i]){
                return start;
            }
            start = start + 1;
        }
        return start;
    }
};
