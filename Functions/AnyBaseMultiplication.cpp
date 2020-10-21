#include<iostream>
using namespace std;


int singleproduct(int b,int n1,int d2){
    int rv=0;
    int c=0;
    int p=1;
    while(n1>0 ||c>0){
        int d1=n1%10;
        n1=n1/10;
        int d=d1*d2+c;
        d=d%b;
        c=d/b;
        rv+=d*p;
        p=p*10;
    }
    return rv;
}
int anybaseadd(int b,int n1,int n2){
    int rv=0;
    int c=0;
    int p=1;
    while(n2>0 || n1>0 || c>0){
        int d1=n1%10;
        int d2=n2%10;
        n1=n1/10;
        n2=n2/10;
        int d=d1+d2+c;
        c=d%b;
        d=d/b;
        rv+=d*p;
        p=p*10;
    }
    return rv;
}
int product(int b,int n1,int n2){
    int rv=0;
    int p=1;
    while(n2>0){
        int d2=n2%10;
        n2=n2/10;
        int sprd=singleproduct(b,n1,d2);
        rv=anybaseadd(b,rv,sprd*p);
        p=p*10;
    }
    return rv;
}
int main(){
    int n1,n2,b;
    cin>>b;
    cin>>n1;
    cin>>n2;
    cout<<product(b,n1,n2);
 return 0;   
}