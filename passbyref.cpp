#include<iostream>
using namespace std;
int main() {
    int p=8;
    int &q=p;

    q++;
    cout<<p<<endl;

    cout<<&p<<endl;
    cout<<&q<<endl;

    return 0;

}
