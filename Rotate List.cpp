ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        int len = 1;
        ListNode* curr = head;
        while(curr->next!=NULL){
            len++;
            curr=curr->next;
        }
        curr->next=head;
        k=k%len;
        k=len-k;
        while(k--){
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
