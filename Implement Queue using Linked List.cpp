void MyQueue:: push(int x)
{
    QueueNode* N = new QueueNode(x);
    if(front==NULL){
        front = rear = N;
        return;
    }
    rear->next = N;
    rear = N;
}

int MyQueue :: pop()
{       int N;
        if(front==NULL){
            return -1;
        }
        
        N = front->data;
        front=front->next;
        
        return N;
}
