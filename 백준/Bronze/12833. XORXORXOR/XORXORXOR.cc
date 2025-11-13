#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin>>A>>B>>C;
    if(C%2 == 1){
        A ^= B;
    }
    cout<<A<<"\n";
    return 0;
}