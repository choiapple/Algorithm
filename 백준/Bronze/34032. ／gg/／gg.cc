#include <iostream>
using namespace std;
int main(){
    int N, answer = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] == 'O') answer--;
        else answer++;
    }
    if(answer > 0){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}