// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            int a;
            if(!st.empty() && st.top()<arr[i]){
                a=arr[i];
                arr[i]=st.top();
                st.pop();
            }else{
                a=arr[i];
                arr[i]=-1;
            }
            st.push(a);
        }
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
