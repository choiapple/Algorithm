#include <iostream>
using namespace std;
int main(){
    int A, B, C, tmp, num;
    cin>>A>>B>>C;
    cout<<A+B-C<<"\n";
    tmp = B;
    while(tmp > 0){
        tmp /= 10;
        A *= 10;
    }
    cout<<A+B-C<<"\n";
    return 0;
}