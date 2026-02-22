#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b, answer = 1;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>a>>b;
        if(a * b > 0){
            answer += b - a;
        }else if(a < 0){
            answer += b - a - 1;
        }else{
            answer += b - a + 1;
        }
    }
    if(answer <= 0){
        answer -= 1;
    }
    cout<<answer;
    return 0;
}