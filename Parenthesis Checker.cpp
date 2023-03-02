
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for (auto c : x){
            if (s.empty()){
                s.push(c);
            }else if( (c == '}' && s.top() == '{') || (c == ']'&& s.top() == '[') 
                || ( c == ')' && s.top() == '(') ){
                s.pop();
            }else {
                s.push(c);
            }
        }
        
        if (s.empty()){
            return true;
        } else {
            return false;
        }
        // Your code here
    }
};
