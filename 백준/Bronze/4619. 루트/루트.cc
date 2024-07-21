#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int B, N, A, tmp, K;
    while(true){
        cin>>B>>N;
        if(B == 0 && N == 0){
            break;
        }
        A = 0;
        K = 0;
        for(int i=1; i<=1000000; i++){
            tmp = pow(i, N);
            if(abs(tmp - B) < abs(K - B)){
                A = i;
                K = tmp;
            }else{
                break;
            }
        }
        cout<<A<<"\n";
    }
}