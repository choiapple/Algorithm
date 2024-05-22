#include <iostream>
using namespace std;
int main(){
    int N, answer = 0;
    cin>>N;
    for(int i=1; i<=N; i++){
        answer += (i*(i+1))/2 + i*(i+1);
    }
    cout<<answer<<"\n";
    return 0;
}