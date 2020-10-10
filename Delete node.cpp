Node* deleteNode(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    int count =0;
    Node *temp=head;
    
     if(i==0)
     {
         head=head->next;
         return head;
     }
    
    while(temp !=NULL && count< (i-1) )
    {
        temp=temp->next;
            count++;
    }
    if(temp!=NULL)
    { Node *a=temp->next;
     if(a==NULL)//agar a empty hogya toh
         return head;
     Node *b=a->next;
     temp->next=b;
     }
    
    return head;
        }
