void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node* fast=head->next;
    Node* slow=head;
    
    while(fast!=head && fast->next != head){
        fast=fast->next->next;
        slow=slow->next;
    }
    
    *head2_ref=slow->next;
    slow->next=head;
    *head1_ref=head;
    
    Node* temp=*head2_ref;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    
    temp->next=*head2_ref;
    
}
