#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter odd n value:";
    cin>>n;

    for (int line=0;line<n;line++){
        for(int i=0;i<n;i++){
            if(i==n/2){
                cout<<"*";
            }else if(line==n/2){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        // //space for the cuurent line
        // for(int i=0;i<2;i++){
        //     if(i!=n/2 && line!=n/2){
        //         cout<<" ";
        //     }else{
        //         cout<<"*";
        //     }
        // }
        // cout<<endl;
    }
    return 0;

}
