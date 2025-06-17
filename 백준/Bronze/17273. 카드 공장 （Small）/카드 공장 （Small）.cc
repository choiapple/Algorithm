#include <iostream>
using namespace std;
int main(){
    int N, M, fro, bac, cur=0, tmp;
    cin>>N>>M;
    cin>>fro>>bac;
    for(int i=0; i<M; i++){
        cin>>tmp;
        if(cur == 0 && tmp >= fro){
            cur = 1;
        }else if(cur == 1 && tmp >= bac){
            cur = 0;
        }
    }
    if(cur == 0) cout<<fro;
    else cout<<bac;
    return 0;
}