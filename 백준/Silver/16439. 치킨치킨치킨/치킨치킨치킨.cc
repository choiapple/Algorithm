#include <iostream>
#include <algorithm>
using namespace std;
int map[31][31] = {0, }, N, M, answer = 0, pick[3];
void re(int idx, int cnt){
    if(cnt != -1){
        pick[cnt] = idx;
    }
    if(cnt == 2){
        int sum = 0;
        for(int i=0; i<N; i++){
            int score = 0;
            for(int j=0; j<3; j++){
                score = max(map[i][pick[j]], score);
            }
            sum += score;
        }
        answer = max(answer, sum);
        return;
    }
    for(int i=idx; i<M; i++){
        re(i+1, cnt+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>map[i][j];
        }
    }
    re(-1, -1);
    cout<<answer<<"\n";
    return 0;
}