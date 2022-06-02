 vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
       priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
       for(int i=0;i<K;i++){
           pq.push({arr[i][0],i,0});
       }
       vector<int>ans;
       while(!pq.empty()){
           ans.push_back(pq.top()[0]);
           int index=pq.top()[2];
           index++;
           if(index<K){
               pq.push({arr[pq.top()[1]][index],pq.top()[1],index});
           }
           pq.pop();
       }
       return ans;
    }
