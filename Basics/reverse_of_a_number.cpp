#include<iostream>
using namespace std;
int main(){
    long int n,rem;
    cin>>n;
    while(n!=0){
        rem=n%10;
        cout<<rem<<endl;
        n=n/10;
    }
    return 0;
}