Node * removeDuplicates( Node *head) 
    {
        unordered_set<int> set;
        Node* curr = head;
        Node* prev=NULL;
        while(curr){
            if(set.find(curr->data)!=set.end()){
                prev->next=curr->next;
                delete(curr);
            }else{
                set.insert(curr->data);
                prev=curr;
            }
            curr=prev->next;
        }
        
        
        return head;
    }
