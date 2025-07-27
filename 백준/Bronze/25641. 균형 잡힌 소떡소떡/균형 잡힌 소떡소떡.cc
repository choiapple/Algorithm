#include <iostream>
using namespace std;
int main(){
    int N, so = 0, tu = 0, k=0;
    string s;
    cin>>N;
    cin>>s;
    for(int n=0; n<N; n++){
        if(s[n] == 's') so++;
        else tu++;
    }
    for(int n=0; n<N; n++){
        if(so == tu) break;
        k++;
        if(s[n] == 's') so--;
        else tu--;
    }
    for(int n=k; n<N; n++){
        cout<<s[n];
    }
    return 0;
}