#include <iostream>
using namespace std;
int main(){
    int N, sumA, sumB, sumC;
    for(int i=1000; i<10000; i++){
        N = i;
        sumA = 0;
        sumB = 0;
        sumC = 0;
        while(N > 0){
            sumA += N%10;
            N /= 10;
        }
        N = i;
        while(N > 0){
            sumB += N%12;
            N /= 12;
        }
        N = i;
        while(N > 0){
            sumC += N%16;
            N /= 16;
        }
        if(sumA == sumB && sumB == sumC) cout<<i<<"\n";
    }
    return 0;
}