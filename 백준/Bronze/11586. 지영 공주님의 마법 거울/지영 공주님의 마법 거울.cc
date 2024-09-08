#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N, K;
    string s[101];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s[i];
    }
    cin>>K;
    if(K == 1){
        for(int i=0; i<N; i++){
            cout<<s[i]<<"\n";
        }
    }else if(K == 2){
        for(int i=0; i<N; i++){
            reverse(s[i].begin(), s[i].end());
            cout<<s[i]<<"\n";
        }
    }else{
        for(int i=N-1; i>=0; i--){
            cout<<s[i]<<"\n";
        }
    }
}