#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, M, p1, p2, answer, cur;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>M;
        answer = 0;
        cur = 0;
        for(int m=0; m<M; m++){
            cin>>p1>>p2;
            cur = cur - p1 + p2;
            answer = max(answer, cur);
        }
        cout<<answer<<"\n";
    }
}