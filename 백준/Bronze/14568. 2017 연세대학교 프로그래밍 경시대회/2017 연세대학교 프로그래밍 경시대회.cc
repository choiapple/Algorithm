#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int answer = 0;
    for(int i=2; i<=N; i+=2){
        int tmp = N - i - 2;
        if(tmp/2 < 0) continue;
        answer += tmp/2;
    }
    cout<<answer<<"\n";
}