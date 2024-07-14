#include <iostream>
using namespace std;
int main(){
    long long N, answer = 1;
    long long tmp = 60 * 60 * 24 * 7;
    cin>>N;
    for(int i=1; i<=N; i++){
        answer *= i;
    }
    cout<<answer/tmp<<"\n";
    return 0;
}