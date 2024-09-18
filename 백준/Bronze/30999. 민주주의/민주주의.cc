#include <iostream>
using namespace std;
int main(){
    int N, M, tmpM, answer = 0;
    char tmp;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        tmpM = 0;
        for(int j=0; j<M; j++){
            cin>>tmp;
            if(tmp == 'O'){
                tmpM++;
            }
        }
        if(tmpM > M/2){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}