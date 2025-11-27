#include <iostream>
using namespace std;
int main(){
    int N, answer = 1;
    cin>>N;
    N = (N+1) / 2;
    for(int i=0; i<N; i++){
        answer = (answer * 2) % 16769023;
    }
    cout<<answer;
    return 0;
}