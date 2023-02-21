class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
        
        if(s1.empty() or s2.empty()){
            return "0";
        }
        int cnt=0;
        if(s1[0]=='-'){
            s1=s1.substr(1);
            cnt++;
        }
        
        if(s2[0]=='-'){
            s2=s2.substr(1);
            cnt++;
        }
       vector<int>temp(s1.size()+s2.size() , 0);
       
       for(int i=s1.size()-1 ; i>=0 ; i--){
           for(int j=s2.size()-1 ; j>=0 ; j--){
               
               int num=(s1[i]-'0') * (s2[j]-'0');
               num+=temp[i+j+1];
            //   temp[i+j+1]+=num;
               temp[i+j]+=num/10;
               temp[i+j+1]=num%10;
           }
       }
       
       int i=0;
   
       while(i < temp.size() and temp[i]==0){
           i++;
       }
       
       
       if(i==temp.size()){
           return "0";
       }
       
       
       string res="";
       
       if(cnt%2){
           res.push_back('-');
       }
       while(i < temp.size()){
           res.push_back(temp[i]+'0');
           i++;
       }
       
       return res;
    }
               
};
