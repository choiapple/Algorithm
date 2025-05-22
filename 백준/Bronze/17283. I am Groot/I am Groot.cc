#include <iostream>
using namespace std;
int main(){
    int L, R, answer = 0, tmp, k = 1;
    cin>>L;
    cin>>R;
    while(true){
        k *= 2;
        L = L * R / 100;
        if(L <= 5) break;
        answer += k * L;
    }
    cout<<answer<<"\n";
    return 0;
}