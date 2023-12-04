#include <iostream>
using namespace std;
int main(){
    long long answer = 0;
    long long N;
    cin>>N;
    answer = N * (N+1) * (N-1) / 2;
    cout<<answer<<"\n";
}