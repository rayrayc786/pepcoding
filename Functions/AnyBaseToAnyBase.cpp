#include<iostream>
using namespace std;
int decimaltoany(int n,int b){
    int p=1;
    int rev=0;
    while(n>0){
        int d;
        d=n%b;
        n=n/b;
        rev+= d*p;
        p=p*10;
    }
    return rev;
}
int anytodecimal(int n,int b){
    int p=1;
    int rev=0;
    while(n>0){
        int d;
        d=n%10;
        n=n/10;
        rev+=d*p;
        p=p*b;
    }
    return rev;
}
int anybasetoany(int n,int b1, int b2){
    int dec=anytodecimal(n,b1);
    int dn=decimaltoany(dec,b2);
    return dn;
}
int main(){
    int n,b1,b2;
    cin>>n;
    cin>>b1;
    cin>>b2;
    cout<<anybasetoany(n,b1,b2);
    
}