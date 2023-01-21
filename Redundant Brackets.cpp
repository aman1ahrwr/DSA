bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' ||
          s[i]=='+' ||
          s[i]=='-' ||
          s[i]=='*' ||
          s[i]=='/'){
            st.push(s[i]);
        }else if(s[i]==')'){
            bool isRedundant=true;
            while(st.top()!='('){
                int t=st.top();
                if(t=='-' || t=='+' || t=='/' || t=='*'){
                    isRedundant=false;
                }
                st.pop();
            }
            if(isRedundant) return true;
            st.pop();
        }else{
            continue;
        }
    }
    return false;
}
