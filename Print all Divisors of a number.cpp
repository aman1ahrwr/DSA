#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your printDivisors function here
void printDivisors(int n){

    vector<int> ans;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ans.push_back(i);
            if(i!=(n/i)) ans.push_back(n/i);
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}


int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
