class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* reverse(Node* head){
        Node* curr = head,*prev= NULL;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev= curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next == NULL) return true;
        Node* a=head,*b = head;
        while(a != NULL && a->next !=NULL){
            a = a ->next ->next;
            b = b->next;
        }
        a = head;
        while(a->next != b) a= a->next;
        a->next = NULL;
        
        Node* h2 = reverse(b);
        
        // while(head){
        //     cout<<(head->data)<<" ";
        //     head = head ->next;
        // }
        // cout<<endl;
        
        while(head){
            if(head->data != h2->data) return false;
            head = head ->next;
            h2 = h2->next;
        }
        return true;
    }
};
