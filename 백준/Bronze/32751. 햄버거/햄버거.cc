#include <iostream>
using namespace std;
int main(){
    int N, A, B, C, D;
    string s;
    cin>>N;
    cin>>A>>B>>C>>D;
    cin>>s;
    if(s[0] != 'a' || s[N-1] != 'a'){
        cout<<"No";
        return 0;
    }
    int flag = 0;
    for(int i=1; i<N; i++){
        if(s[i] == s[i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"No";
        return 0;
    }
    int a = 0, b = 0, c = 0, d = 0;
    for(int i=0; i<N; i++){
        if(s[i] == 'a') a++;
        else if(s[i] == 'b') b++;
        else if(s[i] == 'c') c++;
        else d++;
    }
    if(a > A || b > B || c > C || d > D){
        cout<<"No";
        return 0;
    }
    cout<<"Yes";
    return 0;
}