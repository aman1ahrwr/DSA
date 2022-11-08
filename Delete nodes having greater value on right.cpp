private:
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* temp = NULL;
        
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        return prev;
    }
    public:
    Node *compute(Node *head)
    {
        head = reverse(head);
        Node* res = head;
        Node* prev = head;
        int maxi = head->data;
        head = head->next;
        
        while(head){
            if(maxi>head->data){
                prev->next=head->next;
                head=prev->next;
            }else{
                maxi=head->data;
                prev=head;
                head=head->next;
            }
        }
        
        head = reverse(res);
        return head;
    }
