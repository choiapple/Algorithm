#include <iostream>
using namespace std;
int main(){
    long long N, A, B, C;
    long long answer = 1;
    cin>>N>>A>>B>>C;
    for(int i=1; i<=N; i++){
        answer *= i;
    }
    for(int i=1; i<=A; i++){
        answer /= i;
    }
    for(int i=1; i<=B; i++){
        answer /= i;
    }
    for(int i=1; i<=C; i++){
        answer /= i;
    }
    cout<<answer<<"\n";
    return 0;
}