void threeWayPartition(vector<int>& array,int a, int b)
    {
        int s=0; int e=array.size()-1;
        int i=0; int n =array.size();
        while(i<=e){
            if(array[i]<a){
                swap(array[i++], array[s++]);
            }else if(array[i]>b){
                swap(array[i], array[e--]);
            }else{
                i++;
            }
        }
    }
