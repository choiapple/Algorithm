#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, cur, pre, tmp, flag;
    while(cin>>N){
        if(N == 1) {
            cin>>pre;
            cout<<"Jolly"<<"\n";
            continue;
        }
        int visit[3001] = {0, };
        cin>>pre;
        for(int i=1; i<N; i++){
            cin>>cur;
            tmp = abs(cur - pre);
            if(tmp <= N) visit[tmp]++;
            pre = cur;
        }
        flag = 0;
        for(int i=1; i<N; i++){
            if(visit[i] == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"Jolly"<<"\n";
        else cout<<"Not jolly"<<"\n";
    }
}