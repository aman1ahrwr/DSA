// Least Recently used Cache
class LRUCache {
public:
    class node{
        public:
        int key; int value;
        node* next;
        node* prev;
        node(int _key, int _value){
            key = _key;
            value = _value;
        }
    };
    
    node* head = new node(-1, -1);
    node* tail = new node(-1, -1);
    int cap;
    unordered_map<int, node*> map;
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void addnode(node* newnode){
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }
    
    void deletenode(node* delnode){
        node* delnext = delnode->next;
        node* delprev = delnode->prev;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    int get(int key_) {
        if(map.find(key_)!=map.end()){
            node* resnode = map[key_];
            int res = resnode->value;
            map.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            map[key_]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key_, int value) {
        if(map.find(key_)!=map.end()){
            node* existingnode = map[key_];
            map.erase(key_);
            deletenode(existingnode);
        }
        
        if(cap==map.size()){
            map.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        
        addnode(new node(key_, value));
        map[key_]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such: 
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
