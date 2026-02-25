#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, T, cnt = 0, flag = 0;
    string s[1001][8], tmp[4], answer;
    cin>>N>>M;
    for(int n=0; n<N; n++){
        cin>>T;
        for(int i=0; i<8; i++){
            cin>>s[n][i];
        }
    }
    for(int m=0; m<M; m++){
        for(int i=1; i<=3; i++){
            cin>>tmp[i];
        }
        cnt = 0;
        for(int n=0; n<N; n++){
            flag = 0;
            for(int i=1; i<=3; i++){
                if(s[n][i] != tmp[i]){
                    flag = 1;
                }
            }
            if(flag == 0){
                cnt++;
                answer = s[n][0];
            }
        }
        if(cnt == 0){
            cout<<"!"<<"\n";
        }else if(cnt >= 2){
            cout<<"?"<<"\n";
        }else{
            cout<<answer<<"\n";
        }
    }
    return 0;
}