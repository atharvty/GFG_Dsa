
class Solution{
public:
    void Insert(stack<int> &St, int num){
        if(St.empty()){
            St.push(num);
            return;
        }
        int ele = St.top();
        St.pop();
        Insert(St,num);
        St.push(ele);
    }
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int num=St.top();
        St.pop();
        Reverse(St);
        Insert(St, num);
    }
};
