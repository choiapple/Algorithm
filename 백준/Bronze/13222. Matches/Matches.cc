#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, W, H, tmp, maxN;
    cin>>N>>W>>H;
    maxN = W*W + H*H;
    for(int n=0; n<N; n++){
        cin>>tmp;
        if(tmp*tmp <= maxN){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}