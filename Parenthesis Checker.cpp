// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    bool matching(char a, char b)
    {
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0; i<x.size(); i++){
            if(x[i]=='[' || x[i]=='{' || x[i]=='('){
                st.push(x[i]);
            }else if(st.empty()){
                return false;
            }else if(matching(st.top(),x[i])==false){
                return false;
            }else{
                st.pop();
            }
        }
        return st.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends


// Another Solution same Approach different Code
bool isMatch(char o, char c){
    return ((o=='[' && c==']') || 
                 (o=='(' && c==')') || 
                 (o=='{' && c=='}'));
}

bool isValidParenthesis(string s)
{
    stack<char> st;
    
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }else if(st.empty()){
            return false;
        }else{
            if(isMatch(st.top(), s[i])){
                st.pop();
            }else{
                return false;
            }
        }
    }
    
    if(st.empty()) return true;
    return false;
}
