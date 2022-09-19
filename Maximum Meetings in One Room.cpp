vector<int> maxMeetings(int N,vector<int> &S,vector<int> &E){
        vector<pair<int, int>> meet(N);
        for(int i=0; i<N; i++){
            meet[i].first = E[i];
            meet[i].second = i;
        }
        
        sort(meet.begin(), meet.end());
        
        int endTime = meet[0].first;
        vector<int> ans;
        ans.push_back(meet[0].second+1);
        for(int i=1; i<N; i++){
            if(S[meet[i].second]>endTime){
                ans.push_back(meet[i].second+1);
                endTime=meet[i].first;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
