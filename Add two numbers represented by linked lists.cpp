Node* reverse(Node* root){
        Node* curr= root;
        Node* prev=NULL;
        Node* temp =NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }

struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* temp = new Node(0);
        Node* res = temp;
        
        first = reverse(first);
        second = reverse(second);
        
        int carry=0;
        while(first || second){
            int sum = (first?first->data:0)+(second?second->data:0)+carry;
            carry=sum/10;
            Node* newNode = new Node(sum%10);
            temp->next=newNode;
            temp=temp->next;
            if(first) first=first->next;
            if(second) second=second->next;
        }
        
        
        if(carry){
            Node* newNode = new Node(carry);
            temp->next=newNode;
            temp=temp->next;
        }
        
        res=res->next;
        res=reverse(res);
        
        return res;
    }
