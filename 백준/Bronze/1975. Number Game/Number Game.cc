#include <iostream>
using namespace std;
int f(int N, int i){
    int cnt = 0;
    while(N){
        if(N%i == 0)cnt++;
        else break;
        N/=i;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer;
    cin>>T;
    while(T--){
        cin>>N;
        answer = 0;
        for(int i=2; i<=1000; i++){
            answer += f(N, i);
        }
        cout<<answer<<"\n";
    }
    return 0;
}