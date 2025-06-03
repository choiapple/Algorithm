#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, si, answer, tmp;
    string s;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>s;
        si = s.length();
        tmp = 1;
        answer = 0;
        for(int i=si-1; i>=0; i--){
            if(s[i] == '1'){
                answer += tmp;
            }
            tmp *= 2;
        }
        cout<<answer<<"\n";
    }
    return 0;
}