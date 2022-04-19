void MyQueue :: push(int x)
{
    arr[rear++]=x;
    
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if(rear==front){
        return -1;
    }      
    int d = arr[front];
    front++;
    return d;
}

