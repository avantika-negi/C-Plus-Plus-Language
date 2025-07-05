#include<iostream>
using namespace std;

//Prime number between a and b
 bool isPrime(int num){
    //function check number it is a prime or not
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;

 }


int main() {
    int a=2;
    int b=10;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
    

    return 0;
}
