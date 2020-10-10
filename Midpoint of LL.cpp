node* midpoint_linkedlist(node *head)
{
    // Write your code here
    node *slow=head;
    node *fast=head->next;
    while(fast!=NULL && fast->next !=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    return slow;

}
