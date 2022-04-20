void QueueStack :: push(int x)
{
    while(!q1.empty()){
        int d = q1.front();
        q1.pop();
        q2.push(d);
    }
    q1.push(x);
    while(!q2.empty()){
        int d = q2.front();
        q2.pop();
        q1.push(d);
    }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.empty()){
        return -1;
    }else{
        int d = q1.front();
        q1.pop();
        return d;
    }     
}
