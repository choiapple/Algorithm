#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, answer = 1, tmp;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>tmp;
        if(tmp == 0) tmp = 1;
        answer *= tmp;
        answer %= M;
    }
    answer %= M;
    cout<<answer;
    return 0;
}