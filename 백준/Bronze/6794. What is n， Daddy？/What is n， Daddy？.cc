#include <iostream>
using namespace std;
int main(){
    int N, answer = 0;
    cin>>N;
    for(int i=0; i<=5; i++){
        for(int j=0; j<=5; j++){
            if(i + j == N){
                if(i == j) answer++;
                answer++;
            }
        }
    }
    cout<<answer/2<<"\n";
}