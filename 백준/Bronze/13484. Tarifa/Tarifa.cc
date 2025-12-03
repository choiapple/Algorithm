#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int X, N, p, answer = 0;
    cin>>X;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>p;
        answer += X - p;
    }
    cout<<answer+X<<"\n";
    return 0;
}