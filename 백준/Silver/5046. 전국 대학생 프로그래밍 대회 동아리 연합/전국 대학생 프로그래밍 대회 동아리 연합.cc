#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, B, H, W, P, a, answer = 987654321;
    cin>>N>>B>>H>>W;
    for(int i=0; i<H; i++){
        cin>>P;
        for(int j=0; j<W; j++){
            cin>>a;
            if(a >= N){
                if(N * P <= B){
                    if(answer > N * P){
                        answer = N*P;
                    }
                }
            }
        }
    }
    if(answer == 987654321){
        cout<<"stay home"<<"\n";
    }else{
        cout<<answer<<"\n";
    }
}