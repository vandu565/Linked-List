node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
    if(head->next==NULL)
    {return head;}
    
    node *h1=reverse_linked_list_rec(head->next);
    node *temp=h1;
    while(temp->next!=NULL)
    {temp=temp->next;}
    temp->next=head;
    head->next=NULL;
    return h1;
    
}
