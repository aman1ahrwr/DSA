int countTriplets(struct Node* head, int x) 
{ 
    set<int> set;
    int count=0;
    for(auto i= head; i; i=i->next){
        for(auto j= i->next; j; j=j->next){
            if(set.find(x-(i->data)-(j->data))!=set.end()){
                count++;
            }
        }
        set.insert(i->data);
    }
    return count;
} 
