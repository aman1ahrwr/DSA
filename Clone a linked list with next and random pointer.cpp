// Another Approach from Love Babbar
void insertAtTail(Node* &head, Node* &tail, int data){
        Node* newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
    }

    
    Node *copyList(Node *head)
    {
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        
        while(temp){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp=temp->next;
        }
        
        unordered_map<Node*, Node*> map;
        temp=head;
        Node* t = cloneHead;
        while(t && temp){
            map[temp]=t;
            temp=temp->next;
            t=t->next;
        }
        
        temp=head;
        t = cloneHead;
        while(temp){
            t->arb=map[temp->arb];
            temp=temp->next;
            t=t->next;
        }
        
        return cloneHead;
    }




// Earliest Solution.
Node *copyList(Node *head)
    {
        // Making a Clone
        Node* curr = head;
        while(curr!=NULL){
            Node* temp = curr->next;
            curr->next = new Node(curr->data);
            curr->next->next = temp;
            curr=temp;
        }
        curr=head;
        
        // Setting the arb(random) pointers
        while(curr!=NULL){
            if(curr->next!=NULL){
            curr->next->arb = (curr->arb != NULL)?curr->arb->next:NULL;
            }
            curr = curr->next->next;
        }
        
        // Seperating the two Linked lists
        Node* original = head;
        Node* copy = head->next;
        Node* temp = copy;
        while(original!=NULL){
            original->next = original->next->next;
            copy->next = (copy->next!=NULL)?copy->next->next:copy->next;
            original = original->next;
            copy = copy->next;
        }
        return temp;
    }
