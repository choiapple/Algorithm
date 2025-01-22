#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int peo[101] = {0, };
    int T, K, N, num, h, m;
    int answer = 0, cnt = 0, answer_n = 987654321;
    cin>>T;
    for(int t=0; t<T; t++){
        cnt = 0;
        answer = 0;
        answer_n = 987654321;
        cin>>K;
        for(int k=0; k<K; k++){
            cin>>peo[k];
        }
        cin>>N;
        for(int i=0; i<N; i++){
            cin>>num>>h>>m;
            for(int j=0; j<K; j++){
                if(peo[j] == num){
                    int score = h * 60 + m;
                    if(score >= 0 && score <= 6*60){
                        if(score < answer_n){
                            answer_n = score;
                            answer = j;
                        }
                        cnt++;
                    }
                    break;
                }
            }
        }
        cout<<peo[answer]<<" "<<cnt<<"\n";
    }
}