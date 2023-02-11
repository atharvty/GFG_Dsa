class Solution
{
    public:
    Node *reverse (Node *head)
    { 
        if(head==NULL)return NULL;
        Node * forw=NULL;
        Node* curr=head;
        Node* prev=NULL;
       
        while(curr!=NULL ){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        if(forw!=NULL){
            head->next=reverse(forw);
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        if(head==NULL || head->next==NULL)return head;
        Node*res=reverse(head);
        Node * temp=res;
        Node * ans=temp;
        Node * curr=ans;
        temp=temp->next;
        while(temp!=NULL){
            if(temp->data>=curr->data){
                curr->next=temp;
                curr=curr->next;
            }
            temp=temp->next;
        }
        curr->next=NULL;
        return reverse(ans);
        
    }
    
};
