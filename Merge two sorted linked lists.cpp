Node* sortedMerge(Node* head1, Node* head2)  
{  
    
   Node* temp = new Node(0);
   Node* res = temp;
   
   while(head1!=NULL && head2!=NULL)
   {
       if(head1->data < head2->data){
           temp->next = head1 ;
           temp = temp->next;
           head1 = head1->next;
       }
       else{
           temp->next = head2 ;
           temp = temp->next;
           head2 = head2->next;
       }
   }
   if(head1!=NULL) temp->next = head1;
   else temp->next = head2;
   return res->next;
   
   
}  


// Another Approach
Node<int>* solve(Node<int>* &head1, Node<int>* &head2){
    if(head1->next==NULL){
        head1->next=head2;
        return head1;
    }
    
    Node<int>* curr1=head1;
    Node<int>* next1=head1->next;
    Node<int>* curr2=head2;
    Node<int>* next2=NULL;
    
    while(curr2 && next1){
        if((curr2->data>=curr1->data) && (curr2->data<=next1->data)){
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            
            curr1=curr2;
            curr2=next2;
        }else{
            curr1=next1;
            next1=next1->next;
            if(next1==NULL){
                curr1->next=curr2;
                return head1;
            }
        }
    }
    return head1;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    if(first->data<=second->data){
        return solve(first, second);
    }else{
        return solve(second, first);
    }
}
