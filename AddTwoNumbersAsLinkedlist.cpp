class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    Node* reverse12(Node* heed){
        Node* nex;
        Node* prev = NULL;
        while(heed){
            nex = heed->next;
            heed->next = prev;
            prev = heed;
            heed = nex;
        }
        heed = prev;
        return heed;
        
    }

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        int c=0,s=0;
        first  = reverse12(first);
        second = reverse12(second);
        Node* temp;
        Node* res  = NULL;
        Node* curr = NULL;
        while(first||second){
            s = c+(first?first->data:0)+(second?second->data:0);
            c = (s>=10)?1:0;
            s = s%10;
            temp = new Node(s);
            if(res==NULL) res = temp;
            else curr->next = temp;
            curr = temp;
            if(first) first=first->next;
            if(second) second = second->next;
            
                
            }
            if(c>0){
                temp = new Node(c);
                curr->next = temp;
                curr = temp;
            }
            res = reverse12(res);
            return res;
        }
        
        
        
        // code here
    
};
