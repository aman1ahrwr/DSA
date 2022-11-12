Node* addOne(Node *head) 
    {
        head=reverse(head);
        
        Node* curr=head;
        
        while(curr){
            if(curr->data<9){
                curr->data+=1;
                break;
            }else if(curr->next){
                curr->data=0;
                curr=curr->next;
            }else{
                curr->data=0;
                curr->next= new Node(1);
                break;
            }
        }
        
        
        head=reverse(head);
        
        return head;
    }
