#include<iostream>
using namespace std;
int main(){
    long int n,rem,count;
    
    cin>>n;
    while(n!=0){
        rem=n%10;
        count++;
        n=n/10;
    }
    cout<<count;
    return 0;
}
