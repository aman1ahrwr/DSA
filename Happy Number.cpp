int digitSqSum(int n){
        int sum=0;
        while(n){
            sum+=((n%10)*(n%10));
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int temp=n;
        while(1){
            if(temp==89){
                return false;
            }else if(temp==1){
                return true;
            }else{
                temp=digitSqSum(temp);
            }
        }
    }
