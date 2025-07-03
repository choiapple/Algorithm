#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N;
    pair<int, int> score[100001];
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        for(int n=0; n<N; n++){
            cin>>score[n].first>>score[n].second;
        }
        sort(score, score+N); // first를 기준으로 오름차순 정렬
        int max_score = score[0].second;
        int cnt = 0;
        for(int n=0; n<N; n++){
            if(max_score >= score[n].second){
                cnt++;
                max_score = score[n].second;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}