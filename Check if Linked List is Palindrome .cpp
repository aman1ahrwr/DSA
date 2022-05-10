bool isPalindrome(Node *head)
    {
        
        Node* fast = head;
        Node* slow = head;
        while(fast==NULL && fast->next==NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // Reversing the Right half of the Linked list
        Node* prev = NULL;
        Node* curr = slow;
        Node* temp;
        while(curr!=NULL){
            temp =curr->next;
            curr->next = prev;
            prev=curr;
            curr=temp;
        }

        fast = head;
        while(prev!=NULL){
            if(fast->data!=prev->data){
                return 0;
            }
            fast = fast->next;
            prev = prev->next;
        }
        return 1;
    }
