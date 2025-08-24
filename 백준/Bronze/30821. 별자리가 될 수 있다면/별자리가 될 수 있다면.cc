#include <iostream>
using namespace std;
int main(){
    int N, di = 120;
    long long answer = 1;
    cin>>N;
    for(int i=0; i<5; i++){
        answer *= (N - i);
    }
    cout<<answer/di<<"\n";
    return 0;
}