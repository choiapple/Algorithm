#include <iostream>
using namespace std;
int main(){
    int N, K, P, tmp, answer = 0, bong = 0, no = 0;
    cin>>N>>K>>P;
    for(int i=0; i<N*K; i++){
        cin>>tmp;
        bong++;
        if(tmp == 0){
            no++;
        }
        if(bong == K){
            if(no < P){
                answer++;
            }
            bong = 0;
            no = 0;
        }
    }
    cout<<answer<<"\n";
    return 0;
}