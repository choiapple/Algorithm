#include <iostream>
#define MAX 10001
using namespace std;
int apart[MAX] = {0, };
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, H1, H2, f = 1;
    cin>>N>>M;
    for(int i=1; i<=M; i++){
        cin>>H1>>H2;
        apart[H1] = i;
        apart[H2] = i;
    }
    N %= (2*M);
    if(N == 0) N = 2*M;
    for(int i=1; i<MAX; i++){
        if(apart[i] != 0) {
            if(f == N){
                cout<<apart[i]<<"\n";
                break;
            }else{
                f++;
            }
        }
    }
    return 0;
}