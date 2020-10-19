#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int n,rem;
    cin>>n;
    int temp=n,count=0;
    
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    int div=(int)pow(10,count-1);
    while(div!=0){
        int quo=n/div;
        cout<<quo<<endl;
        n=n%div;
        div=div/10;
    }
    return 0;
}