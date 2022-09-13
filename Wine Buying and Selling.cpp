 int wineSelling(vector<int>& a){
      int b=0; int s=0;
      int n = a.size();
      int ans=0;
      while(b<n && s<n){
          while(a[b]<=0){
              b++;
              if(b==n) return ans;
          }
          while(a[s]>=0){
              s++;
              if(s==n) return ans;
          }
          if(abs(a[b])>=abs(a[s])){
              ans+=abs(a[s])*abs(b-s);
              a[b]+=a[s];
              a[s]=0;
          }else{
              ans+=abs(a[b])*abs(b-s);
              a[s]+=a[b];
              a[b]=0;
          }
      }
      return ans;
  }
