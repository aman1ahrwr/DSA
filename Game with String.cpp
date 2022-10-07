int minValue(string s, int k){
        unordered_map<char, int> map;
        priority_queue<int, vector<int>> pq;
        
        for(int i=0; i<s.size(); i++){
            map[s[i]]++;
        }
        
        for(auto i: map){
            pq.push(i.second);
        }
        
        while(k--){
            int a = pq.top()-1;
            pq.pop();
            pq.push(a);
        }
        
        int ans=0;
        while(!pq.empty()){
            ans += (pq.top()*pq.top());
            pq.pop();
        }
        
        return ans;
    }
