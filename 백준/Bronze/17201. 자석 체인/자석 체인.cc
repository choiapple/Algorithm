#include <iostream>
using namespace std;
int main(){
    int N, flag = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int n=1; n<N*2; n++){
        if(s[n-1] == s[n]){
            flag = 1;
        }
    }
    if(flag == 0) cout<<"Yes";
    else cout<<"No";
    return 0;
}