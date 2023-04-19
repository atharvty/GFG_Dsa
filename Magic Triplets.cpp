class Solution{
	public:
	int countTriplets(vector<int>nums){
		int ans = 0;
	    for(int i = 1 ; i < nums.size()-1 ; i++)
	    {
	        int left = 0, right = 0;
	        for(int j = i-1 ; j >= 0 ; j--)
	        {
	            if(nums[i] > nums[j])left++;
	        }
	        
	        for(int j = i + 1 ; j < nums.size() ; j++)
	        {
	            if(nums[i] < nums[j])right++;
	        }
	        ans+=(left*right);
	    }
	    return ans;
	}
};
