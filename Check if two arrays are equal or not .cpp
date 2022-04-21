  bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<ll,int> map;
        for(ll i=0; i<N; i++){
            map[A[i]]++;
        }
        for(ll i=0; i<N; i++){
            map[B[i]]--;
        }
        for(auto i=map.begin(); i!=map.end(); i++){
            if(i->second!=0){
                return false;
            }
        }
        return true;
    }
