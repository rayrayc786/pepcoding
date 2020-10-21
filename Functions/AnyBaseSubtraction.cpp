#include<iostream>
using namespace std;
int anybaseadd(int b,int n1,int n2){
    int rv=0;
    int c=0;
    int p=1;
    while(n2){
        int d1=n1%10;
        int d2=n2%10;
        n1=n1/10;
        n2=n2/10;
        
        int d=0;
        d2=d2+c;
        if(d2>=d1){
            d=d2-d1;
            c=0;
        }else{
            d=d2+b-d1;
            c=-1;
        }
        rv+=d*p;
        p=p*10;
    }
    return rv;
}
int main(){
    int n1,n2,b;
    cin>>b;
    cin>>n1;
    cin>>n2;
    cout<<anybaseadd(b,n1,n2);
 return 0;   
}