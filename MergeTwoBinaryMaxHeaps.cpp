class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
     priority_queue<int>pq;
     vector<int>v;
     int i;
     for(i=0;i<n;i++){
         pq.push(a[i]);
       
     }
     for(i=0;i<m;i++){
       pq.push(b[i]);
     }
     for(i=0;i<n+m;i++){
         v.push_back(pq.top());
         pq.pop();
     }
     return v;
    }
};
