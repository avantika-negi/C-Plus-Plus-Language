#include<iostream>
using namespace std;
int main() {
    int n1,n2,n3;
    cout<<"Enter three No:"<<endl;
    cin>>n1>>n2>>n3;

    if (n1>n2 && n1>n2 ){
        cout<<"The max is:"<<n1<<endl;
    }
    else if (n2>n1 && n2>n3 ){
        cout<<"The max is:"<<n2<<endl;
    } else{
        cout<<"The max is:"<<n3<<endl;
    }
    return 0;

}