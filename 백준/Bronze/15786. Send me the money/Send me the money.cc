#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, k, flag;
    string s, ss;
    cin>>N>>M;
    cin>>s;
    for(int m=0; m<M; m++){
        cin>>ss;
        k = 0;
        flag = 0;
        for(int i=0; i<ss.length(); i++){
            if(s[k] == ss[i]){
                k++;
            }
            if(k == N){
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout<<"true"<<"\n";
        else cout<<"false"<<"\n";
    }
}