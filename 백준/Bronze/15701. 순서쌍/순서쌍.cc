#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, answer = 0;
    cin>>N;
    for(int i=1; i<=sqrt(N); i++){
        if(N%i != 0) continue;
        if(i != N/i) answer+=2;
        else answer++;
    }
    cout<<answer<<"\n";
    return 0;
}