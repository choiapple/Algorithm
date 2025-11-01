#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, M, answer = 0, a, b, tmp = 0;
    vector<int> vc;
    cin>>N>>M;
    for(int m=0; m<M; m++){
        cin>>a>>b;
        if(a >= N){
            tmp++;
        }else{
            vc.push_back(N-a);
        }
    }
    if(tmp >= M-1){
        cout<<answer<<"\n";
        return 0;
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<M-1-tmp; i++){
        answer += vc[i];
    }
    cout<<answer<<"\n";
    return 0;
}