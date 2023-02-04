int getNthFromLast(Node *head, int n)
{
    Node *temp=head;
    for(int i=0;i<n;i++){
        if(temp!=NULL)
            temp=temp->next;
        else
            return -1;
    }
        
    Node *curr=head;
    while(temp!=NULL){
        curr=curr->next;
        temp=temp->next;
    }
    return curr->data;
}
