

/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{
    Node *curr=*head;
    Node *prev=NULL;
    while(curr->data!=key){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    return;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    Node *head=*head_ref;
    Node *curr=head->next;
    Node *prev=head;
    while(curr!=head){
        Node *nxt=curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
     curr->next = prev;
    *head_ref = prev;
    return;
}ˇ
