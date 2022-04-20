void StackQueue :: push(int x)
{
    while(!s1.empty()){
        int d = s1.top();
        s1.pop();
        s2.push(d);
    }
    s1.push(x);
    while(!s2.empty()){
        int d = s2.top();
        s2.pop();
        s1.push(d);
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if(s1.empty()){
        return -1;
    }
    
    int d = s1.top();
    s1.pop();
    return d;
}
