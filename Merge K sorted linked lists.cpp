Node * mergeKLists(Node *arr[], int k)
    {
           Node* temp = new Node(0);
           Node* res = temp;
           
           priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> minPq;
           
           for(int i=0; i<k; i++){
               minPq.push({arr[i]->data, arr[i]});
           }
           
           while(!minPq.empty()){
               Node* node = minPq.top().second;
               temp->next= node;
               temp=temp->next;
               if(node->next!=NULL){
                   minPq.push({node->next->data, node->next});
               }
               minPq.pop();
           }
           temp->next=NULL;
           
           return res->next;
    }
