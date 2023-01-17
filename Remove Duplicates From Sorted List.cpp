Node * uniqueSortedList(Node * head) {
    if(head==NULL || head->next==NULL) return head;
    Node* curr = head;
    Node* temp=NULL;
    while(curr){
        if(curr->next && curr->data==curr->next->data){
            temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }else{
            curr=curr->next;
        }
    }
    
    return head;
}
