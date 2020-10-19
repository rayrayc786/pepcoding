#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int max=n1;
    if(n2>=max){
        max=n2;
    }
    if(n3>=max){
        max=n3;
    }
    if(max==n1){
        bool flag=((n2*n2)+(n3*n3))==(n1*n1);
        cout<<boolalpha<<flag;
    }else if(max==n2){
        bool flag=((n1*n1)+(n3*n3))==(n2*n2);
        cout<<boolalpha<<flag;
    }else{
        bool flag=((n1*n1)+(n2*n2))==(n3*n3);
        cout<<boolalpha<<flag;
    }
    
    
    return 0;
}