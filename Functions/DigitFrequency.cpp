#include<iostream>
using namespace std;
int main(){
    long int n;
    int d;
    cin>>n;
    cin>>d;
    int count=0;
    int rem;
    while(n>0){
        rem=n%10;
        n=n/10;
        if(rem==d){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
