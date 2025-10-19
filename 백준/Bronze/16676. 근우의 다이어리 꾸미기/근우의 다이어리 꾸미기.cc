#include <iostream>
using namespace std;
int main(){
    int N, answer = 0, K = 0;
    cin>>N;
    while(true){
        if(K*10+1 <= N){
            K = K * 10 + 1;
            answer++;
        }else{
            break;
        }
    }
    if(answer == 0) answer = 1;
    cout<<answer<<"\n";
    return 0;
}