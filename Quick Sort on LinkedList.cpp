

 
/* a node of the singly linked list 
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; */

//you have to complete this function

node *partition(node *head,node* tail)
{
    node *pivot=head;
    node *prev=head;
    node* curr=head->next;
    while(curr!=NULL)
    {
        if(pivot->data>curr->data)
        {
            int temp=prev->next->data;
            prev->next->data=curr->data;
            curr->data=temp;
            prev=prev->next;
        }
        curr=curr->next;
    }
    int t=prev->data;
    prev->data=pivot->data;
    pivot->data=t;
    return prev;
}

void sort_help(node *head,node *tail)
{
    if(head==NULL||tail==NULL||head==tail)
    {
        return;
    }
    node *pivot=partition(head,tail);
    sort_help(head,pivot);
    sort_help(pivot->next,tail);
}

node* gettail(node *head)
{
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}

void quickSort(struct node **headRef) {
    node *head=*headRef;
    if(head==NULL||head->next==NULL)
    {
        return;
    }
    node *tail=gettail(head);
    sort_help(head,tail);
}
