node* arrange_LinkedList(node* head)
{
    //write your code here
    node* temp=head;
    node* oddHead=NULL;
     node* oddTail=NULL;
     node* evenHead=NULL;
     node* evenTail=NULL;
    while(temp!=NULL)
    {
        if((temp->data)%2==0)
        {
            if(evenHead==NULL)
            {
                evenHead=temp;
                evenTail=temp;
            }
            else
            {
                evenTail->next=temp;
                evenTail=temp;
            }
        }
        if((temp->data)%2 ==1)
        {
            if(oddHead==NULL)
            {
                oddHead=temp;
                oddTail=temp;
            }
            else
            {
                oddTail->next=temp;
                oddTail=temp;
            }
        }
        temp=temp->next;
    }
    if(oddTail!=NULL)
    {oddTail->next=NULL;}
     if(evenTail!=NULL)
     {evenTail->next=NULL;}
    if(oddTail!=NULL)
    {oddTail->next=evenHead;}
     if(oddHead!=NULL)
     {return oddHead;}
    else
    {return evenHead;}
    
}
