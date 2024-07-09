#include <iostream>
using namespace std;
int main(){
    long long N, answer;
    cin>>N;
    answer = N*(N-1)*(N-2)*(N-3)/24;
    cout<<answer<<"\n";
}