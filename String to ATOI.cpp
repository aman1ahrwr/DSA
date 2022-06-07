int myAtoi(string s) {
        if(s.empty()){
            return 0;
        }
        
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        s = s.substr(i);
        int sign=1;
        if(s[0]=='-') sign=-1;
        i = (s[0]=='+' || s[0]=='-')?1:0;
        long res = 0;
        while(i<s.size()){
                if(s[0]==' ' || !isdigit(s[i])) break;
                res=res*10+s[i]-'0';
                if(sign==-1 && -1*res<INT_MIN) return INT_MIN;
                if(sign==1 && res>INT_MAX) return INT_MAX;
                i++;
        }
        return (int)(res*sign);
    }
