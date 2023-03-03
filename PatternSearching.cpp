
class Solution{
public: 

int search(string text, string pat)
{

    int n=pat.size();
    for(int i=0;i<text.size();i++){
        if(text[i]==pat[0]){
            
          // cout<<text.substr(i,i+n)<<i<<i+n<<endl;
            if(text.substr(i,n)==pat){
                return 1;
            }
        }
    }
    return 0;
}
};
