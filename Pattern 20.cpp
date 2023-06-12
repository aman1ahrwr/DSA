//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1; i<=2*n-1; i++){
            if(i<=n){
                for(int j=1; j<=i; j++){
                    cout<<"*";
                }
                for(int j=1; j<=abs(2*(n-i)); j++){
                    cout<<" ";
                }
                for(int j=1; j<=i; j++){
                    cout<<"*";
                }
            }else{
                for(int j=0; j<n-(i%n); j++){
                    cout<<"*";
                }
                for(int j=0; j<abs(2*(i-n)); j++){
                    cout<<" ";
                }
                for(int j=0; j<n-(i%n); j++){
                    cout<<"*";
                }
            }
            
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends