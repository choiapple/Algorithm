#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c[4] = {'A', 'C', 'G', 'T'};
    int N, M, answer = 0, max_n = 0;
    string s[1001], answer_s = "", max_c;
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>s[i];
    }
    for(int i=0; i<M; i++){
        int cnt[4] = {0, };
        for(int j=0; j<N; j++){
            for(int k=0; k<4; k++){
                if(s[j][i] == c[k]){
                    cnt[k]++;
                }
            }
        }
        max_n = 0;
        for(int k=0; k<4; k++){
            if(max_n < cnt[k]){
                max_n = cnt[k];
                max_c = c[k];
            }
        }
        answer += N - max_n;
        answer_s += max_c;
    }
    cout<<answer_s<<"\n"<<answer<<"\n";
    return 0;
}