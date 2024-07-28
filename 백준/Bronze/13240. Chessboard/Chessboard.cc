#include <iostream>
using namespace std;
int main(){
    int N, M;
    char cur;
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        if(i%2 == 1){
            cur = '*';
        }else{
            cur = '.';
        }
        cout<<cur;
        for(int j=2; j<=M; j++){
            if(cur == '*'){
                cur = '.';
            }else{
                cur = '*';
            }
            cout<<cur;
        }
        cout<<"\n";
    }
}