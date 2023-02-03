// Better Approach
string reverseWords(string S) 
    { 
        string ans="";
        string temp="";
        
        for(int i=S.size()-1; i>=0; i--){
            if(S[i]=='.'){
                reverse(temp.begin(), temp.end());
                ans+=temp+'.';
                temp="";
            }else{
                temp.push_back(S[i]);
            }
        }
        reverse(temp.begin(), temp.end());
        ans+=temp;
        
        return ans;
} 

// Earlier Approach
string reverseWords(string s) {
        int i=0;
        string res = "";
        while(i<s.size()){
            while(i<s.size() && s[i]==' ') i++;
            if(i>=s.size()) break;
            int j = i+1;
            while(j<s.size() && s[j]!=' ') j++;
        
            string word = s.substr(i, j-i);
            if(res.size()==0) res = word;
            else res = word+' '+res;
            i=j+1;
        }
        return res;
    }
