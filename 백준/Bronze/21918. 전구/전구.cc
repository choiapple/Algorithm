#include <iostream>
using namespace std;
int N, M, a, b, c, light[4001] = {0, };
void first(int i, int x){
    light[i] = x;
}
void second(int l, int r){
    for(int i=l; i<=r; i++){
        if(light[i] == 0){
            light[i] = 1;
        }else{
            light[i] = 0;
        }
    }
}
void third(int l, int r){
    for(int i=l; i<=r; i++){
        light[i] = 0;
    }
}
void fourth(int l, int r){
    for(int i=l; i<=r; i++){
        light[i] = 1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N>>M;
    for(int n=1; n<=N; n++){
        cin>>light[n];
    }
    for(int m=0; m<M; m++){
        cin>>a>>b>>c;
        if(a == 1) first(b, c);
        else if(a == 2) second(b, c);
        else if(a == 3) third(b, c);
        else fourth(b, c);
    }
    for(int i=1; i<=N; i++){
        cout<<light[i]<<" ";
    }
    return 0;
}