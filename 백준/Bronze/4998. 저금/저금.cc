#include <iostream>
using namespace std;
int main(){
    double N, B, M;
    int answer = 0;
    while(cin>>N>>B>>M){
        answer = 0;
        while(N <= M){
            N = N * (100 + B) / 100;
            answer++;
        }
        cout<<answer<<"\n";
    }
}