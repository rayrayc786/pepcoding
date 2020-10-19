#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int temp=n;
        while(n!=0){
            n=n/10;
            count++;
        }
        k=k%count;
        if(k<0){
            k=k+count;
        }
        int quo=temp / (int)pow(10,k);
        
        int rem=temp % (int) pow(10,k);
       
        int nrem=rem * pow(10,count-k);
        
        int num=nrem+quo;
        cout<<num<<endl;
    
    
    return 0;
}