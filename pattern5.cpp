#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;

    for(int i =1;i<=n;i++){//rows
        for(int j=1;j<=(n-i);j++){//space
            cout<<" ";
        }
        for (int j=1;j<=(2*i-1);j++){//star
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}