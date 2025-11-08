#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, answer;
    long long N, A, B, tmp;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N>>A>>B;
        answer = -1;
        tmp = pow(2, N);
        while(A > 0){
            if(tmp <= A){
                A -= tmp;
            }
            tmp/=2;
            answer++;
        }
        cout<<answer<<"\n";
    }
}