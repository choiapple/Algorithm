#include <iostream>
using namespace std;
int main(){
    int R, B, L, W, tmp;
    cin>>R>>B;
    tmp = (R + 4) / 2;
    for(int i=1; i<tmp; i++){
        if((i*(tmp-i)) == B - 4 + 2 * tmp){
            L = tmp - i;
            W = i;
            break;
        }
    }
    cout<<L<<" "<<W<<"\n";
    return 0;
}