Node* findIntersection(Node* head1, Node* head2)
{
    Node * temp = new Node(0);
    Node* head = temp;
    
    Node* i = head1;
    Node* j = head2;
    
    while(i!=NULL && j!=NULL){
        if(i->data==j->data){
            Node* newNode = new Node(i->data);
            temp->next=newNode;
            temp=temp->next;
            i=i->next;
            j=j->next;
        }else if(i->data<j->data){
            i=i->next;
        }else{
            j=j->next;
        }
    }
    return head->next;
}
