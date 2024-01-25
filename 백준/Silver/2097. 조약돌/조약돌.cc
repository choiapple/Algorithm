#include <iostream>
using namespace std;
int main(){
    long long N;
    long long w, h;
    cin>>N;
    int flag = 0;
    w = 1;
    h = 1;
    while(true){
        if((w+1) * (h+1) >= N){
            break;
        }
        if(flag == 0){
            w++;
            flag = 1;
        }else{
            h++;
            flag = 0;
        }
    }
    cout<<2*(w+h)<<"\n";
    return 0;
}