#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long X, Y, W, S;
    cin>>X>>Y>>W>>S;
    if(W*2 <= S){
        cout<<(X+Y)*W<<"\n";
    }else{
        long long answer = 0;
        long long tmp = min(X, Y);
        answer += tmp * S;
        X -= tmp;
        Y -= tmp;
        if(W <= S){
            answer += X * W;
            answer += Y * W;
        }else{
            if(X%2 == 0){
                answer += X*S;
            }else{
                answer += (X/2)*2*S+W;
            }
             if(Y%2 == 0){
                answer += Y*S;
            }else{
                answer += (Y/2)*2*S+W;
            }
        }
        cout<<answer<<"\n";
    }
}