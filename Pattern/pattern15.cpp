#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int os=n/2;
    int is=1;
    int val=1;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=os;j++){
                cout<<"\t";
            }
            int cval=val;
            for(int j=1;j<=is;j++){
                cout<<cval<<"\t";
                if(j <=is/2){
                    cval++;
                }else{
                    cval--;
                }
                
            }
            
            if(i<=n/2){
                os--;
                is+=2;
                val++;
            }else{
                os++;
                is-=2;
                val--;
            }
            
            cout<<endl;
        
        
    }
    return 0;
    
}