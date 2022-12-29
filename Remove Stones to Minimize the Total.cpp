int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int, vector<int>> maxHeap;
        for(int i=0; i<piles.size(); i++){
            maxHeap.push(piles[i]);
        }

        while(k){
            int t = maxHeap.top();
            maxHeap.pop();
            t=t-t/2;
            maxHeap.push(t);
            k--;
        }

        int sum=0;
        while(!maxHeap.empty()){
            int t = maxHeap.top();
            maxHeap.pop();
            sum+=t;
        }

        return sum;
    }
