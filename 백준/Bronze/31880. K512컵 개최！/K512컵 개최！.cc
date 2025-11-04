#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, tmp;
    long long answer = 0;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>tmp;
        answer += tmp;
    }
    for(int m=0; m<M; m++){
        cin>>tmp;
        if(tmp > 0){
            answer *= tmp;
        }
    }
    cout<<answer<<"\n";
    return 0;
}