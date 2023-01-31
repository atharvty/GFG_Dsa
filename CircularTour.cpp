class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int start = 0 ;
        int rf = 0;
        int ef = 0;
        
        for(int i = 0 ; i<n;i++){
            ef += (p[i].petrol - p[i].distance);
            if( ef<0){
                start= i+1;
                rf += ef;
                ef = 0;
            }
        }
        if(rf + ef >=0){
            return start;
        }
        else return -1;
       //Your code here
    }
};
