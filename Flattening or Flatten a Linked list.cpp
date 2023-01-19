Node* merge(Node* vertical, Node* horizontal){
    if(vertical==NULL) return horizontal;
    if(horizontal==NULL) return vertical;
    
    Node* dummy=new Node(-1);
    Node* temp =dummy;
    
    while(vertical && horizontal){
        if(vertical->data<horizontal->data){
            temp->child=vertical;
            temp=vertical;
            vertical=vertical->child;
        }else{
            temp->child=horizontal;
            temp=horizontal;
            horizontal=horizontal->child;
        }
    }
    
    if(vertical){
        temp->child=vertical;
    }
    
    if(horizontal){
        temp->child=horizontal;
    }
    
    return dummy->child;
}

Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL) return head;
    
    Node* down = head;
    Node* right = flattenLinkedList(head->next);
    down->next=NULL;
    
    Node* merged=merge(down, right);
    
    return merged;
    
}


// Same approach differnet code
Node* merge(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    
    Node* result;
    if(a->data<b->data){
        result=a;
        result->bottom = merge(a->bottom,b);
    }else{
        result=b;
        result->bottom = merge(a,b->bottom);
    }
    result->next=NULL;
    return result;
}
    
Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL){
        return root;
    }
    
    return merge(root,flatten(root->next));
}
