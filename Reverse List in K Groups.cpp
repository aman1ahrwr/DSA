Node* kReverse(Node* head, int k) {
    if(head==NULL){
        return head;
    }
    
    int cnt=0;
    Node* curr=head;
    Node* prev=NULL;
    Node* temp=NULL;
    while(cnt<k && curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        cnt++;
    }
    
    if(temp!=NULL){
        head->next=kReverse(temp, k);
    }
    return prev;
}
