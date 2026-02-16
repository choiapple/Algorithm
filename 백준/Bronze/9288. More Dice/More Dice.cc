#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin>>N;
    for(int n=1; n<=N; n++){
        cin>>M;
        cout<<"Case "<<n<<":"<<"\n";
        for(int i=1; i<=6; i++){
            for(int j=i; j<=6; j++){
                if(i+j == M){
                    cout<<"("<<i<<","<<j<<")"<<"\n";
                }
            }
        }
    }
}