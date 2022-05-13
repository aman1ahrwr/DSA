int removeDuplicates(vector<int>& a) {
        int i = 0;
        for(int j=i+1; j<a.size(); j++){
            if(a[i]!=a[j]){
                i++;
                a[i]=a[j];
            }
        }
        return i+1;
    }
