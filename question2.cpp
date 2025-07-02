#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;//123

    int sum =0;
    while(n>0){//123>0
        int lastdigits= n%10;//123%10=3
        sum+=lastdigits;//0+3=3
        n/=10;//12 and so on...
    }
    cout<<sum;
    return 0;

}
