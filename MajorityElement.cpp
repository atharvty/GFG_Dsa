int majorityElement(int a[], int size)
    {
        
        // your code here
        map<int,int> m;
        
        for(int i=0;i<size;i++){
            m[a[i]]++;
        }
        
        for(auto i: m){
            if(i.second>(size/2)){
                return i.first;
            }
        }
        
        return -1;
        
        
    }
