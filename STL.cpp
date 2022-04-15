#include<bits/stdc++.h>
using namespace std;

template <class t1, class t2>
class a{
    t1 data1;
    t2 data2;
    public: 
        a(t1 i, t2 j){
            data1 = i;
            data2 = j;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};

int main(){
    a<int, float> obj(1, 1.2);
    obj.display();
    return 0;
}