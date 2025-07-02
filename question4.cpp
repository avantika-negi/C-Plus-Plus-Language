#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int results=0;

    for(int i =1;i<=n;i++){

        if(i%2==0){
            results-=i;
        }else{
            results+=i;
        }
    }
    cout<<results<<endl;
    
    return 0;

}
