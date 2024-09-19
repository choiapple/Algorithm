#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Q, tmp, flag;
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>tmp;
        flag = 0;
        if(tmp == 1){
            cout<<1<<"\n";
        }else{
            while(true){
                if(tmp == 1){
                    break;
                }
                if(tmp%2 == 0){
                    tmp/=2;
                }else{
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                cout<<1<<"\n";
            }else{
                cout<<0<<"\n";
            }
        }
        
    }
}