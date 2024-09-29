#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, k, cur, pre, result = 0;
    cin>>N>>M;
    for(int i=0; i<M; i++){
        cin>>k;
        for(int j=0; j<k; j++){
            cin>>cur;
            if(j != 0 && pre < cur){
                result = 1;
                break;
            }
            pre = cur;
        }
        if(result == 1){
            break;
        }
    }
    if(!result){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }
    return 0;
}