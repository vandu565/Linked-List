node* mergeTwoLLs(node *head1, node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    node *fh=NULL;
    node *ft=NULL;
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


int length (node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    { head=head->next;
    int a=length(head);
    a++; 
    return a;}
}
node* mergeSort(node *head) {
    //write your code here
    if(head->next==NULL)
    {return head;}
    int len=length(head);
    node *head1=head;
    node *temp1=head;
    int mid=(len-1)/2;
    int count=0;
    while(count<mid)
    {
       temp1=temp1->next;
        count++;
    }
    node *temp2=temp1->next;
    temp1->next=NULL;
    node *head2=temp2;
    node *h1=mergeSort(head1);
    node *h2=mergeSort(head2);
    node *finalHead=mergeTwoLLs(h1, h2);
    return finalHead;
    
        
    
    
    
}
