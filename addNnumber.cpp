#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int sum=0;
    int i =1;  //Loop variable

    while(i<=n){ // Condition
        sum+=i;
        i++;// updating Loop Variable
    }

    cout<<sum<<endl;

    return 0;

}
