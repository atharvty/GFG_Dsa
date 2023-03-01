Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node* current = head;
    while (current->next != nullptr)
    {
        if (current->next->data == current->data)
        {
            current->next = current->next->next;
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}
