#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A, B, tmp;
    while(true){
        cin>>A>>B;
        if(A == 0 && B == 0) break;
        tmp = A - B;
        if(tmp < 2){
            cout<<0<<" "<<0<<"\n";
        }else if(tmp % 2 == 0){
            cout<<tmp/2<<" "<<0<<"\n";
        }else{
            cout<<tmp/2-1<<" "<<1<<"\n";
        }
    }
}