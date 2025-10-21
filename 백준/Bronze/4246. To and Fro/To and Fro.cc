#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len, flag = 0, h;
    string s;
    while(true){
        cin>>N;
        if(N == 0) break;
        cin>>s;
        char c[100][100];
        len = 0;
        flag = 0;
        h = 0;
        while(len < s.length()){
            if(flag == 0){
                for(int i=0; i<N; i++){
                    c[h][i] = s[len++];
                }
                flag = 1;
            }else{
                for(int i=N-1; i>=0; i--){
                    c[h][i] = s[len++];
                }
                flag = 0;
            }
            h++;
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<h; j++){
                cout<<c[j][i];
            }
        }
        cout<<"\n";
    }
}