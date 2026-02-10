#include <iostream>
using namespace std;
int main(){
    int a, b, tmp = 1;
    cin>>a>>b;
    while(true){
        if(a*tmp <= b*(tmp-1)){
            break;
        }
        tmp++;
    }
    cout<<tmp;
    return 0;
}