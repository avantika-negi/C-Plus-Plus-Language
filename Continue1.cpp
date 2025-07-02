//Print all the value btw 1 and 50 excecpt for the multiple of 3
#include<iostream>
using namespace std;
int main() {
    for(int i=0;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;

}