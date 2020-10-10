Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *fh=NULL;
    Node *ft=NULL;
    if(head1->data<head2->data)
    {
        fh=head1;
        ft=head1;
        head1=head1->next;
    }
    else
    {
        fh=head2;
        ft=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL)
    {
        if(head2->data < head1->data)
        {
            ft->next=head2;
            ft=head2;
            head2=head2->next;
        }
        else
        {
            ft->next=head1;
            ft=head1;
            head1=head1->next;
        }
     }
    if(head2==NULL)
    {
        while(head1!=NULL)
        {
            ft->next=head1;
            ft=head1;
            head1=head1->next;
        }
    }
    else
    {
        while(head2!=NULL)
        {
            ft->next=head2;
            ft=head2;
            head2=head2->next;
        }
    }
    return fh;
    }
