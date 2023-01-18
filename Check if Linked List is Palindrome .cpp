// Better Solution.
Node* reverse(Node* head){
        Node* prev=NULL;
        Node* temp=NULL;
        Node* curr=head;
        
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        fast=head;
        slow = reverse(slow); 
        
        while(fast && slow){
            if(fast->data!=slow->data){
                return false;
            }
            fast=fast->next;
            slow=slow->next;
        }
        
        return true;
    }


// Same but less Readable Solution.
bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL){
            return 1;
        }
        Node* fast = head;
        Node* slow = head;
        while(fast!=NULL && fast->next!=NULL){
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
