#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int on1=n1;
    int on2=n2;
    while(n1%n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    int gcd=n2;
    cout<<gcd<<endl;
    int lcm= (on1*on2)/gcd;
    cout<<lcm<<endl;
    
    
    return 0;
}