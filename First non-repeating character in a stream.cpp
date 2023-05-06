class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char>q;
		    unordered_map<char,int>mp;
		    string ans = "";
		    for(int i=0;i<A.size();i++){
		        mp[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty()){
		            char frnt = q.front();
		            if(mp[frnt] == 1){
		                ans += frnt;
		                break;
		            }else if(mp[frnt] > 1){
		                q.pop();
		            }
		        }
		        if(q.empty())ans += "#";
		    }
		    return ans;
		}

};
