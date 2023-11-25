#include <iostream>
using namespace std;
int main(){
    int a1, a0, c, n0;
    cin>>a1>>a0;
    cin>>c;
    cin>>n0;
    int flag = 0;
    for(int i=n0; i<=100; i++){
        int tmp1 = a1*i + a0;
        int tmp2 = c * i;
        if(tmp1 > tmp2){
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