bool isPossible(int a[], int n, int cows, int minDist) {
      int cntCows = 1;
      int lastPlacedCow = a[0];
      for (int i = 1; i < n; i++) {
        if (a[i] - lastPlacedCow >= minDist) {
          cntCows++;
          lastPlacedCow = a[i];
        }
      }
      if (cntCows >= cows) return true;
      return false;
    }

int largestMinCows(int a[], int n, int cows){
      sort(a, a + n);

      int low = 1, high = a[n - 1] - a[0];

      while (low <= high) {
        int mid = (low + high) >> 1;

        if (isPossible(a, n, cows, mid)) {
          low = mid + 1;
        } else {
          high = mid - 1;
        }
      }
    return high;
}

//Better Slightly
bool isPossible(vector<int> &stalls, int k, int n, int mid){
    int cows = 1;
    int initialPos = stalls[0];
    for(int i=1; i<n; i++){
        if(stalls[i]-initialPos>=mid){
            initialPos=stalls[i];
            cows++;
            if(cows==k){
                return 1;
            }
        }
    }
    return 0;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int low=0;
    int n=stalls.size();
    int high = stalls[n-1];
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(isPossible(stalls, k, n, mid)){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    
    return ans;
}
