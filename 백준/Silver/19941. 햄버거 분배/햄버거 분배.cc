#include <iostream>
using namespace std;
int main(){
    int N, K, visit[20001] = {0, }, answer = 0;
    string s;
    cin>>N>>K;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] == 'H') continue;
        for(int j=i-K; j<=i+K; j++){
            if(j < 0) continue;
            if(s[j] == 'H' && visit[j] == 0){
                visit[j] = 1;
                answer++;
                break;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}