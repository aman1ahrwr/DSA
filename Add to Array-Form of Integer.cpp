vector<int> addToArrayForm(vector<int>& num, int k) {
        int j=num.size()-1;
        int carry=0;
        while(j>=0){
            int sum=num[j]+k%10+carry;
            if(sum>9){
                num[j]=sum%10;
                carry=sum/10;
            }else{
                num[j]=sum;
                carry=sum/10;
            }
            j--;
            k/=10;
        }

        reverse(num.begin(), num.end());
        while(k){
            int sum=k%10+carry;
            num.push_back(sum%10);
            k/=10;
            carry=sum/10;
        }

        if(carry){
            num.push_back(carry);
        }
        reverse(num.begin(), num.end());

        return num;
    }
