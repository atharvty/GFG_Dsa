void deleteAlt(struct Node *head){
    // Code here
    Node* temp1=head;
    Node* temp2=head;
    while(temp1!=NULL&&temp1->next!=NULL)
    {
       
        
         temp1->next=temp1->next->next;
         temp1=temp1->next;
        // delete temp1;
        
        
        
        // temp=temp->next;
    }
}
