 string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string st="";
        while(i>=0 || j>=0 || carry==1){
            int sum = (i>=0? a[i]-'0':0) + (j>=0? b[j]-'0':0) + carry;
            carry=sum/2;
            sum=sum%2;
            st += (sum+'0');
            i--; j--;
        }

        reverse(st.begin(), st.end());
        return st;
    }
