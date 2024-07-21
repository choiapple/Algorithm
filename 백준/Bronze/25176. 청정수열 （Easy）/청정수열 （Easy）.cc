#include <iostream>
using namespace std;
int main(){
    int N, answer = 1;
    cin>>N;
    for(int i=1; i<=N; i++){
        answer *= i;
    }
    cout<<answer<<"\n";
}