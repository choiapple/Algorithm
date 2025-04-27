#include <iostream>
using namespace std;
int fac(int num){
    if(num <= 1) return 1;
    return num * fac(num - 1);
}
int main(){
    int N, M, K, denominator, numerator;
    double answer;
    cin>>N>>M>>K;
    denominator = fac(N) / (fac(M) * fac(N - M));
    numerator = 0;
    for(int i=K; i<=M; i++){
        int jimin = fac(M) / (fac(i) * fac(M-i));
        int lotto = fac(N-M) / (fac(M-i) * fac(N-M-M+i));
        numerator += jimin * lotto;
    }
    answer = double(numerator) / double(denominator);
    cout<<fixed;
    cout.precision(10);
    cout<<answer<<"\n";
    return 0;
}