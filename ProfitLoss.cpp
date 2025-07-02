#include<iostream>
using namespace std;
int main() {
    int cp , sp;
    cout<<"Enter sp:";
    cin>>sp;
    cout<<"Enter cp:";
    cin>>cp;

    if(sp>cp){
        int profit=sp-cp;
        cout<<"your profit is:"<<profit<<endl;
    } else if (sp<cp){
        int loss=cp-sp;
        cout<<"your Loss is:"<<loss<<endl;
    } else{
        cout<<"No profit or Loss"<<endl;
    }
    return 0;

}