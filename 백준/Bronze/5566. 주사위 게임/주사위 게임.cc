#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, location = 1, map[1001] = {0, }, X, answer, cnt = 0, flag = 0;
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        cin>>map[i];
    }
    for(int i=0; i<M; i++){
        cin>>X;
        cnt++;
        location += X;
        if(location < N){
            location += map[location];
        }
        if(location >= N && flag == 0){
            answer = cnt;
            flag = 1;
        }
    }
    cout<<answer<<"\n";
    return 0;
}