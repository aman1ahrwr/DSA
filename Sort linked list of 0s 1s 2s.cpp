Node* sortList(Node *head)
{
    Node* zeroHead = new Node(0);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(2);
    Node* twoTail = twoHead;
    
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==0){
            zeroHead->next=temp;
            zeroHead=zeroHead->next;
        }else if(temp->data==1){
            oneHead->next=temp;
            oneHead=oneHead->next;
        }else{
            twoHead->next=temp;
            twoHead=twoHead->next;
        }
        temp=temp->next;
    }
    
    
    
    twoHead->next=NULL;
    if(twoTail->next){
        oneHead->next=twoTail->next;
    }
    if(oneTail->next){
        zeroHead->next=oneTail->next;
    }else{
        zeroHead->next=twoTail->next;
    }
    
    return zeroTail->next;
}
