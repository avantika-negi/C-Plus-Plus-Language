#include<iostream>
using namespace std;
int main() {
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<"*" ;
    //     }
    //     cout<<endl;
    // }

    int n,m;
    cin>>n;//column
    cin>>m;//row

    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}