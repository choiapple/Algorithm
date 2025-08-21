#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int U, S, N, M, tmp;
    cin>>S>>N>>M;
    U = S;
    S = 0;
    for(int i=0; i<N+M; i++){
        cin>>tmp;
        if(tmp == 0){
            S--;
        }else{
            if(S+1 > U){
                U *= 2;
            }
            S++;
        }
    }
    cout<<U<<"\n";
    return 0;
}