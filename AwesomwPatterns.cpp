#include<bits/stdc++.h>
using namespace std;

int main(){
    // int rows,columns;
    // cin>>rows>>columns;
    
    // Hollow Rectangle
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         if (i==0 || i == (rows-1) || j ==0 || j == (columns-1))
    //         {
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // Inverted Pyramid
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // right angled triangle
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j<=n-i)
    //         {
    //             cout<<" ";
    //         }else{
    //            cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Half Pyramid using numbers (khud se kiya)
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i;
    //     }
        
    //     cout<<endl;
    // }
    
    // floyd's triangle (khud se kiya)
    // int n;
    // cin>>n;
    // int count = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //        cout<<count<<" "; 
    //        count++;
    //     }
    //     cout<<endl;
    // }

    //Butterfly pattern 
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }

    //     int space = 2*n - 2*i;
    //     for (int k = 1; k <= space; k++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    

    //  for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }

    //     int space = 2*n - 2*i;
    //     for (int k = 1; k <= space; k++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    
    // inverted pattern numbers
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n+1-i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //0-1 pattern
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i+j)%2==0)
    //         {
    //             cout<<"1";
    //         }else{
    //             cout<<"0";
    //         }
            
    //     }
    //     cout<<endl;
    // }
    
    //Rhombus pattern
    // int n;
    // cin>>n;

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    
    //Number pattern(khud se kiya)
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //Palandromic Pattern(new method)
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout<<j;
    //     }
    //     for (int j = 2; j <= i; j++)
    //     {
    //         cout<<j;
    //     }
        
    //     cout<<endl;
    // }

    // // Star pattern
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= 2*i - 1; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    
    //     for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= 2*i - 1; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    
    //Zig-Zag Pattern
    int n;
    cin>>n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i+j)%4==0) || ((i == 2) && (j%4==0)))
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    
    
    return 0;
}






