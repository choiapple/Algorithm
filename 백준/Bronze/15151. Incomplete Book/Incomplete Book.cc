#include <iostream>
using namespace std;
int main(){
    int K, D, answer = 0, tmp = 0;
    cin>>K>>D;
    while(tmp <= D){
        tmp += K;
        if(tmp <= D){
            answer++;
        }
        K *= 2;
    }
    cout<<answer;
    return 0;
}