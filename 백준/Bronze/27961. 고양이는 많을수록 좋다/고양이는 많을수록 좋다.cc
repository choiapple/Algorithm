#include <iostream>
using namespace std;
int main(){
    long long N, tmp = 0, answer = 0;
    cin>>N;
    if(N == 0){
        cout<<0<<"\n";
        return 0;
    }
    while(true){
        if(tmp == 0 && tmp < N){
            tmp++;
            answer++;
        }else if(tmp < N){
            tmp += tmp;
            answer++;
        }
        if(tmp >= N){
            break;
        }
    }
    cout<<answer<<"\n";
}