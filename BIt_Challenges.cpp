#include<iostream>
using namespace std;

// To check the given no is power of 2
bool ispower0f2(int n){
    return (n && !(n& n-1));
}

//write a program to count the number of 1's in binary
int count1(int n){
int count = 0;
while (n)
{
    n = n & (n-1);
    count++;
}
return count;
}

//setBit
int setBit(int n, int pos){
    return (n | (1<<pos));
}

//All possible subsets of abc
void subsets(int arr[],int n){
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
            
        }
        cout<<endl;
    }
    
}

//find unique number among twice occuring numbers
int unique(int arr[], int n){

    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

// find two unique numbers among twice occuring numbers
void unique2(int arr[],int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int tempxor = 0;
    int setbit = 0;
    int pos = 0;
    while (setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i],pos-1))
        {
            newxor = newxor ^ arr[i];
        }
        
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor);
} 

//getBit
bool getBit(int n,int pos){
    return (n & (1<<pos))!=0;
}
//Unique among thrice repeating numbers
int unique3(int arr[],int n){
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j],i))
            {
                sum++;
            }
            
        }
        if (sum%3!=0)
        {
            result = setBit(result,i);
        }
        
    }
    return result;
}

int main(){
    // cout<<ispower0f2(87);
    // cout<<count1(19);
    // int arr[4] = {1,2,3,4};
    // subsets(arr,4);
    int arr[]={1,2,2,3,4,1,1,2,3,3}; 
    cout<<unique2(arr,10);
    return 0;

}