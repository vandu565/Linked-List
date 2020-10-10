void printIthNode(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
 Node *temp=head;
    int length=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        length=length+1;
    }
    temp=head;
   if(i<length)
   {
      
       for(int k=0;k<=i-1;k++)
       {
           temp=temp->next;
       }
       cout<<temp->data<<endl;
   }
}
        
    
