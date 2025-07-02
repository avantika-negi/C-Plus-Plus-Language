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
    cout<<"Row:";
    cin>>n;//row
    cout<<"Column:";
    cin>>m;//Column

    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}