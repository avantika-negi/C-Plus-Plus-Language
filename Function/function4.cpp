#include<iostream>
using namespace std;

//Odd number between a and b

bool isOdd(int num){
    if(num%2==0){
        return false;
    }else{
        return true;
    }
}

int main() {
    int a=1;
    int b=10;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    

    return 0;
}
