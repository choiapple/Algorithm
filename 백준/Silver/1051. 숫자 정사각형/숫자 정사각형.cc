#include <iostream>
using namespace std;
int main(){
    int N, M;
    int answer = 0;
    cin>>N>>M;
    string s[51];
    for(int i=0; i<N; i++){
        cin>>s[i];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            char c = s[i][j];
            int tmp = 0;
            if(N - i < M - j){
                tmp = N - i - 1;
            }else{
                tmp = M - j - 1;
            }
            for(int k=0; k<=tmp; k++){
                if(c == s[i][j+k] && c == s[i+k][j] && c == s[i+k][j+k]){
                    if(answer < (k+1)*(k+1)){
                        answer = (k+1) * (k+1);
                    }
                }
            }
        }
    }
    cout<<answer<<"\n";
}