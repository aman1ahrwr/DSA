int strStr(string s, string x) {
     int n = s.size();
     int m = x.size();
     int j = 0;
     
     for(int i=0; i<n; i++){
         if(s[i]==x[j]){
             int k=i;
             while(s[k]==x[j]){
                 k++; j++;
                 if(j==m) return i;
             }
             j=0;
         }
     }
     return -1;
    }
