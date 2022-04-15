#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    // int arr[n];


    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    
    //Sum of all Subarrays
    // int sum = 0;    
    // for (int i = 0; i < n; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         cout<<sum<<endl;
    //     }
        
    // }
    
    //Longest aritmetic Subarray  
    // int pd = arr[1]-arr[0];
    // int curr = 2;
    // int j = 2;
    // int ans = 2;
    // while (j<n)
    // {
    //     if (pd == arr[j]-arr[j-1])
    //     {
    //         curr++;
    //     }else{
    //         pd = arr[j]-arr[j-1];
    //         curr = 2;
    //     }

    //     ans = max(ans,curr);
    //     j++;
        
    // }
    
    // cout<<ans<<endl;




    //Record Breaker
    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (n == 1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx = max(mx,arr[i]);
    }
    
    cout<<ans<<endl;

    
    
    

    return 0;
}






