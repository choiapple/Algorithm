#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M;
    long long t[10001] = {0, }, answer = 0;
    cin>>M;
    for(int m=0; m<M; m++){
        cin>>t[m];
    }
    sort(t, t+M);
    if(M%2 == 0){
        for(int i=0; i<M/2; i++){
            answer = max(answer, t[i] + t[M-1-i]);
        }
    }else{
        answer = t[M-1];
        for(int i=0; i<(M-1)/2; i++){
            answer = max(answer, t[i] + t[M-2-i]);
        }
    }
    cout<<answer<<"\n";
    return 0;
}