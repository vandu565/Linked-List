node* skipMdeleteN(node  *head, int M, int N) {
    // Write your code here
    node *temp1=head;
    node *temp2;
    
    while(temp1 !=NULL)
    {
        int c1=1;// bhar initalise nhi karna 
    int c2=1;
       while(c1!=M) 
       {
           if(temp1==NULL)
           {return head;}// yhi pe return kra do 
          else
           {temp1=temp1->next;}
           c1++;
       }
        if(temp1!=NULL)
        {temp2=temp1->next;}
        else
        {break;}
        while(c2!=N)
        {
            if(temp2==NULL)
           {
                temp1->next=NULL;
                return head;
            }
           else
           {temp2=temp2->next;}
            c2++;
            
        }
        if(temp2 !=NULL)
        {temp2=temp2->next;}
         temp1->next=temp2;
        temp1=temp2;
    }
    return head;

}
