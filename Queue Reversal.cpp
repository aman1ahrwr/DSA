void solve(queue<int> &q){
     if(q.size()==1){
        return;
    }
    
    int t = q.front();
    q.pop();
    
    solve(q);
    
    q.push(t);
}

queue<int> rev(queue<int> q)
{
    solve(q);
    return q;
}
