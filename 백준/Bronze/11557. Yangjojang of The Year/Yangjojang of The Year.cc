#include <iostream>
using namespace std;
int main(){
    int T, N, tmp, answer_n;
    string s, answer;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        answer_n = 0;
        for(int n=0; n<N; n++){
            cin>>s>>tmp;
            if(tmp > answer_n){
                answer_n = tmp;
                answer = s;
            }
        }
        cout<<answer<<"\n";
    }
}