int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *temp=head;
    int i=0;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        i++;
    }
    return i+1;
    
}


