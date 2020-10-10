int length(Node *head) {
    
    
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


