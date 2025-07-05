#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;//610

    int digits=0;

    while(n>0){
        digits++;//1
        n=n/10;//61 and so on...
    }

    cout<<digits<<endl;
    return 0;

}
