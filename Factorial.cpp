class Solution{
public:
    long long int factorial(int N){
       if(N==0)
       return 1;
        return N*factorial(N-1);//code here
    }
};
