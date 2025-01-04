#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int C, N, answer;
    cin>>C;
    for(int c=0; c<C; c++){
        cin>>N;
        answer = 0;
        for(int n=1; n<=N; n++){
            if(N%n == 0){
                answer++;
            }
        }
        cout<<N<<" "<<answer<<"\n";
    }
    return 0;
}