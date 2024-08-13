#include <iostream>
using namespace std;
int main(){
    long long N, M, answer = 1;
    cin>>N>>M;
    if(N >= M){
        answer = 0;
    }else{
        for(int i=N; i>0; i--){
            answer *= i;
            answer %= M;
            
            if(answer == 0){
                break;
            }
        }
    }
    cout<<answer<<"\n";
}