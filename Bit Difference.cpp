int countBitsFlip(int a, int b){
        
        int c = a^b;
        int count=0;
        while(c){
            if(c&1==1){
                count++;
            }
            c=c>>1;
        }
        return count;
    }
