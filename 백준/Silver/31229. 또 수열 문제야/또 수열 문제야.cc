#include <iostream>
using namespace std;
int main(){
    int N, A = 1;
    cin>>N;
    while(N--){
        cout<<A<<" ";
        A += 2;
    }
    return 0;
}