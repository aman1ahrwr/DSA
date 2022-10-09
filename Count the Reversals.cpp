int countRev (string s)
{
    if(s.size()&1) return -1;
    stack<int> st;
    int cntOpening=0, cntClosing=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='{'){
            st.push(s[i]);
            cntOpening++;
        }else if(!st.empty()){
            st.pop();
            cntOpening--;
        }else{
            cntClosing++;
        }
    }
    
    if(cntOpening&1){
        cntOpening=(cntOpening/2)+1;
    }else{
        cntOpening/=2;
    }
    
    if(cntClosing&1){
        cntClosing=(cntClosing/2)+1;
    }else{
        cntClosing/=2;
    }
    
    return cntClosing+cntOpening;
}
