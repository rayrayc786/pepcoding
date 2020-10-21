#include<iostream>
using namespace std;
int getvaluebase(int n,int b){
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
int main(){
    int n,b;
    cin>>n;
    cin>>b;
    cout<<getvaluebase(n,b);
    
}