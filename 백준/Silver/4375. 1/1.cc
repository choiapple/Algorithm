#include <iostream>
using namespace std;
int main(){
    long long N, K, tmp;
    while(cin>>N){
        K = 1;
        tmp = 1;
        while(K%N != 0){
            K *= 10;
            K++;
            K %= N;
            tmp++;
        }
        cout<<tmp<<"\n";
    }
}