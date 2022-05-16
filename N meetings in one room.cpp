int maxMeetings(int start[], int end[], int n)
    {
       int m=1, k=0;
       vector<pair<int, int>> v;
       
       for(int i=0; i<n; i++){
           v.push_back(make_pair(end[i], start[i]));
       }
       sort(v.begin(), v.end());
       for(int i=0; i<n; i++){
           if(v[k].first<v[i].second){
               k=i;
               m++;
           }
       }
       return m;
    }
