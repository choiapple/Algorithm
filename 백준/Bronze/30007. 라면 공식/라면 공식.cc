#include <iostream>
using namespace std;
int main(){
    int N, A, B, X;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>A>>B>>X;
        cout<<A*(X-1)+B<<"\n";
    }
}