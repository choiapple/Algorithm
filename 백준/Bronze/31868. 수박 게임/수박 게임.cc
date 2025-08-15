#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, K, tmp;
    cin>>N>>K;
    tmp = pow(2, N-1);
    cout<<K/tmp<<"\n";
    return 0;
}