#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp=n-1;
    int st=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
            cout<<"\t";
        }
        for(int j=1;j<=st;j++){
            cout<<"*\t";
        }
        sp--;
        st++;
        cout<<endl;
    }
    
    return 0;
}