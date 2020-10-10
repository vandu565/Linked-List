Node* insertNodeRec(Node *head, int i, int data) {
    
  
    if(i==0)
    {
        Node *newnode=new Node(data);
        newnode->next=head;
          head=newnode;
    }
     
    if(head== NULL) 
   {return head;} // ye baadme ayegi base condition, after i==0 condition
    
    Node *temp=head->next;
    Node *a = insertNodeRec(temp,i-1,data);
    head->next=a;
    return head;
}

