#include<iostream>
using namespace std;
int main() {
    int stars_row,stars_columnn;
    cout<<"Enter the no rows:";
    cin>>stars_row;
    cout<<"Enter the no columns:";
    cin>>stars_columnn;

    for(int line=0;line<stars_row;line++){
        for(int i=0;i<stars_columnn;i++){
            cout<<"*";
            
        }
        cout<<endl;
    }

    
    return 0;

}
