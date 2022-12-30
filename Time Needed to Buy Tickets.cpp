int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int count=0;
        for(int i=0; i<tickets.size(); i++){
            q.push(i);
        }

        while(!q.empty()){
            int t = q.front();
            q.pop();
            count++;
            if(tickets[t]>=1)
                tickets[t]--;
            if(t!=k && tickets[t]==0)
                continue;
            if(t==k && tickets[t]==0)
                break;
            q.push(t);
        }
        return count;
    }
