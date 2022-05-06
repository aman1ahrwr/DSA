int Solution::solve(vector<int> &A, int k) {
    map<int,int> map;
    int Xr = 0;
    int count = 0;
    for(int i=0; i<A.size(); i++){
        Xr = Xr^A[i];

        if(Xr==k){
            count++;
        }

        if(map.find(Xr^k)!=map.end()){
            count += map[Xr^k];
        }

        map[Xr] += 1;
    }
    return count;
}
