#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b, c = 0, answer = 0;
    while(true){
        cin>>N;
        if(N == -1) break;
        answer = 0;
        c = 0;
        for(int n=0; n<N; n++){
            cin>>a>>b;
            answer += a * (b - c);
            c = b;    
        }
        cout<<answer<<" miles"<<"\n";
    }
}