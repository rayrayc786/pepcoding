#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    
    
    return 0;
}