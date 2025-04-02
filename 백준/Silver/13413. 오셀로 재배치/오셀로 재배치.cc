#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, B, W, answer = 0;
    string s, ss;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N;
        cin>>s;
        cin>>ss;
        B = 0;
        W = 0;
        answer = 0;
        for(int j=0; j<N; j++){
            if(s[j] == ss[j]) continue;
            if(s[j] == 'B') B++;
            else W++;
        }
        answer = B > W ? B : W;
        cout<<answer<<"\n";
    }
    return 0;
}