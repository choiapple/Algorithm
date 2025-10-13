#include <iostream>
using namespace std;
int main(){
    long long N, answer = 0;
    cin>>N;
    while(N > 1){
        if(N%2 == 0){
            N /= 2;
        }else{
            N += 1;
        }
        answer++;
    }
    cout<<answer;
    return 0;
}