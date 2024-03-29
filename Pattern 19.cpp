//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        //Upper half of the Diagram
        for(int i=1; i<=n; i++){
            for(int j=1; j<=(n-i+1); j++){
                cout<<"*";
            }
            
            for(int j=0; j<2*(i-1); j++){
                cout<<" ";
            }
            
            for(int j=0; j<n-i+1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        
        //Bottom half of the Diagram
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            
            for(int j=0; j<2*(n-i); j++){
                cout<<" ";
            }
            
            for(int j=1; j<=i; j++){
                cout<<"*";
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
