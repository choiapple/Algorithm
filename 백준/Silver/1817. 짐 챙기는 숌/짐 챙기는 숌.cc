#include <iostream>
using namespace std;
int main(){
    int N, M, C;
    cin>>N>>M;
    int tmp = 0;
    int answer = 0;
    for(int i=0; i<N; i++){
        cin>>C;
        if(tmp + C <= M){
            tmp += C;
        }else{
            answer++;
            tmp = C;
        }
    }
    if(N > 0){
        answer++;
    }
    cout<<answer<<"\n";
    return 0;
}