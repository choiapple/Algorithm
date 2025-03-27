#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, M, A[20001], B[20001], answer = 0, S, E, mid;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N>>M;
        for(int n=0; n<N; n++){
            cin>>A[n];
        }
        for(int m=0; m<M; m++){
            cin>>B[m];
        }
        answer = 0;
        sort(B, B+M);
        for(int n=0; n<N; n++){
            S = 0;
            E = M;
            while(S < E){
                mid = (S+E) / 2;
                if(A[n] > B[mid]){
                    S = mid+1;
                }else{
                    E = mid;
                }
            }
            answer+=S;
        }
        cout<<answer<<"\n";
    }
}