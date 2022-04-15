#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    

    //Searching in 2D arrays(matrix)
    // int x;
    // cin>>x;

    // bool flag = false;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(arr[i][j]==x){
    //             flag = true;
    //         }
    //     }
        
    // }   
    // if(flag==true){
    //     cout<<"Element found"<<endl;
    // }else{
    //     cout<<"Element not found";
    // }

    //Matrix Transpose
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
        
    // }

    /*(maybe wrong, code is right but output is wrong)
    Matrix Multiplication (Mn1xn2 * Nn2xn3)
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int M[n1][n2];
    int N[n2][n3];

    int MN[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>M[i][j];
        }
        
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>N[i][j];
        }
        
    }

    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            M[i][j]=0;
        }
        
    }
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                MN[i][j] += M[i][k]*N[k][j];
            }
            
        }
        
    }
        for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<MN[i][j]<<" ";
        }
        cout<<endl;
    }

    */
    
    
    // Matrix Search for sorted matrix(row and column both are in increasing order) 
    // int x;
    // cin>>x;
    // int r = 0,c= m-1;
    // bool found = false;
    // while (r<n && c>=0)
    // {
    //     if(arr[r][c]==x){
    //         found = true;
    //     }else if(arr[r][c]>x){
    //         c--;
    //     }else{
    //         r++;
    //     }
    // }

    // if(found){
    //     cout<<"Element found";
    // }else{
    //     cout<<"Element not found";
    // }
    
    
    

    // //Printing the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}