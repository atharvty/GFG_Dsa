class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        Node* slow=head,*fast=head;
        int f=0;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                f=1;
                break;
            }
        }
        if(!f) return -1;
        fast=head;
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
        return fast->data;
        
    }
};
