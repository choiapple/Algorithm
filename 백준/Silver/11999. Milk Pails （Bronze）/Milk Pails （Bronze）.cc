#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int X, Y, M, tmp, tmp2, answer = 0;
    cin>>X>>Y>>M;
    tmp = M/X;
    for(int i=0; i<=tmp; i++){
        tmp2 = (M - i*X)/Y;
        answer = max(answer, X*i + tmp2*Y);
    }
    cout<<answer<<"\n";
    return 0;
}