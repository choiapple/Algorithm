#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A, B, C, a, b, c, tmp = 0, answer = 0, N;
    cin>>A>>B>>C;
    cin>>N;
    for(int n=0; n<N; n++){
        tmp = 0;
        for(int i=0; i<3; i++){
            cin>>a>>b>>c;
            tmp += a*A + b*B + c*C;
        }
        if(tmp > answer){
            answer = tmp;
        }
    }
    cout<<answer;
    return 0;
}