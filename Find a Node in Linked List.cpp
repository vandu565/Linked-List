int indexOfNIter(Node *head, int n) {
  
  
    int count=0;
   Node *temp=head;
    while(temp!= NULL)
    {
        if(temp->data==n)
        {break;}
        temp=temp->next;
        count=count +1;
    }
    if(temp==NULL)
    {return -1;}
    return count;
}


