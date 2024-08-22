#include <iostream>
using namespace std;
int main(){
    int A, B, K, X, start, end, answer = 0;
    cin>>A>>B;
    cin>>K>>X;
    if(K-X >= 0){
        start = K-X;
    }else{
        start = 0;
    }
    end = K+X;
    for(int i=start; i<=end; i++){
        if(i >= A && i <= B){
            answer++;
        }
    }
    if(answer == 0){
        cout<<"IMPOSSIBLE"<<"\n";
    }else{
        cout<<answer<<"\n";
    }
    return 0;
}