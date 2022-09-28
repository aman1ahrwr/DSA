int getNthFromLast(Node *head, int n)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int diff = count-n;
    if(diff<0){
        return -1;
    }
    temp=head;
    for(int i=0; i<diff; i++){
        temp=temp->next;
    }
    return temp->data;
}

// Better approach
int getNthFromLast(Node *head, int n)
{
       Node* prev=head;
       Node* curr=head;
       
       while(n-1){
           curr=curr->next;
           if(curr==NULL) return -1;
           n--;
       }
       
       
       while(curr->next){
           prev=prev->next;
           curr=curr->next;
       }
       
       return prev->data;
}
