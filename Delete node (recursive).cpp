Node* deleteNodeRec(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *temp;
    if(head==NULL)
    {  return head;
    }
    
    if(i==0)
    {  head=head->next;
       return head;
    }
    
    temp=head->next;
    Node *a= deleteNodeRec(temp,i-1);
    head->next=a;
    return head;
    
}


