#include<iostream>
using namespace std;
int getvaluebase(int n,int b){
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
int main(){
    int n,b;
    cin>>n;
    cin>>b;
    cout<<getvaluebase(n,b);
    
}