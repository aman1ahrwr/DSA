string largestOddNumber(string num) {
        int n=num.size();
        int j=n-1;
        string ans="";

        while(j>=0){
            int digit=int(num[j]);

            if(digit%2!=0){
                ans=num.substr(0, j+1);
                break;
            }    
            j--;
        }

        return ans;
    }

// TC=O(N)
// SC=O(1)
