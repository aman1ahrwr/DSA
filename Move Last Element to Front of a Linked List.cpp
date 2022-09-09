ListNode *moveToFront(ListNode *head){
        ListNode* curr = head;
        ListNode* prev = curr;
        
        while(curr->next){
            prev=curr;
            curr=curr->next;
        }
        
        curr->next=head;
        prev->next=NULL;
        
        
        return curr;
    }
