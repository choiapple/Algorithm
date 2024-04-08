#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int N, M;
    cin>>N>>M;
    int flag = 0;
    for(int i=0; i<N; i++){
        s += to_string(N);
        if(s.length() >= M){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<s.substr(0, M)<<"\n";
    }else{
        cout<<s<<"\n";
    }
}