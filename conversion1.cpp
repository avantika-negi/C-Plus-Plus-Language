#include<iostream>
using namespace std;

// conversion of binary to decimal
int main() {
    int n;
    cin>>n;

    int ans=0;
    int power=1;

    while(n>0){
        int lastdigits= n%10;
        ans=ans + (lastdigits*power);
        power*=2;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;

}
