#include <iostream>
using namespace std;
int main(){
    string name[9] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
    int N, score[9] = {0, }, tmp, max_n = 0, answer_idx;
    cin>>N;
    for(int i=0; i<9; i++){
        for(int j=0; j<N; j++){
            cin>>tmp;
            if(score[i] < tmp){
                score[i] = tmp;
            }
        }
    }
    for(int i=0; i<9; i++){
        if(max_n < score[i]){
            max_n = score[i];
            answer_idx = i;
        }
    }
    cout<<name[answer_idx]<<"\n";
    return 0;
}