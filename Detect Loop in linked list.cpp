bool detectLoop(Node* head)
    {
        Node* fast = head;
        Node* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
