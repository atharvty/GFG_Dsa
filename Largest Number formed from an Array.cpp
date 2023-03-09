//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	bool static fun(string a, string b){
	    string one = a.append(b);
	    string two = b.append(a);
	    return one>two;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    int n = arr.size();
	    sort(arr.begin(),arr.end(),fun);
	    string str="";
	    for(int i=0;i<n;i++)
	    str.append(arr[i]);
	    return str;
	    
	}
};
