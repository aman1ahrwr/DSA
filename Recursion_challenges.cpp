#include<iostream>
using namespace std;

//print numbers till n in decreasing order
void dec(int n){

    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
    return dec(n-1);
}

//print numbers till n in increasing order
void inc(int n){
    if (n==0)
    {
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

//Finding first occurence of the number in the array
int first(int arr[], int n, int a){
    if (/* condition */)
    {
        /* code */
    }
    

}

int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}