#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, M, P, tmp, answer = 0, answer_price = 0;
    vector<int> vc;
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>P;
        vc.push_back(P);
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<M; i++){
        if(M - i <= N){
            if(vc[i] * (M-i) > answer){
                answer = vc[i] * (M-i);
                answer_price = vc[i];
            }
        }else{
            if(vc[i] * N > answer){
                answer = vc[i] * N;
                answer_price = vc[i];
            }
        }
    }
    cout<<answer_price<<" "<<answer<<"\n";
    return 0;
}