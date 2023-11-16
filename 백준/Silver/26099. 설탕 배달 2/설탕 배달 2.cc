#include <iostream>
using namespace std;
int main(){
    long long N;
    cin>>N;
    int flag = 0;
    long long cnt = 0;
    while(N >= 0){
        if(N == 0 || N%5 == 0){
            flag = 1;
            break;
        }else{
            N -= 3;
            cnt++;
        }
    }
    if(flag == 0){
        cout<<-1<<"\n";
    }else{
        cnt += N/5;
        cout<<cnt<<"\n";
    }
}