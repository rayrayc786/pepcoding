#include <iostream>
using namespace std;
int main(){
    int low,high;
    cin>>low;
    cin>>high;
    int flag;
    for(int i=low;i<=high;i++){
        flag=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            cout<<i<<endl;
        }
        
    }
    return 0;
}