void printReverse(Node*head)
{
    //write your code here
 
    if(head->next==NULL )
    {cout<<head->data<<" ";
     return;
    }
    
    Node *temp=head->next;
    printReverse(temp);
    cout<<head->data<<" ";
    return;
}
