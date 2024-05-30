class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < n; ++i) {
            // Remove elements out of this window
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }
            // Remove smaller elements in k range as they are useless
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }
            // Add new element at the back of deque
            dq.push_back(i);
            // Window is fully overlapping array elements, add to result
            if (i >= k - 1) {
                result.push_back(arr[dq.front()]);
            }
        }
        return result;
    }
    
};
