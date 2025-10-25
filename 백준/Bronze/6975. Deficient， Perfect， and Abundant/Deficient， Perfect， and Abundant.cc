#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        answer = 0;
        for(int n=1; n<N; n++){
            if(N%n == 0){
                answer += n;
            }
        }
        if(N == answer){
            cout<<N<<" is a perfect number."<<"\n";
        }else if(N > answer){
            cout<<N<<" is a deficient number."<<"\n";
        }else{
            cout<<N<<" is an abundant number."<<"\n";
        }
        cout<<"\n";
    }
}