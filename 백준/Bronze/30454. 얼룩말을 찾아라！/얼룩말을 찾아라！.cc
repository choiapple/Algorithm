#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, L, b = 0, cnt = 0, tmp, ss[1001], flag;
    string s[1001];
    cin>>N>>L;
    for(int i=0; i<N; i++){
        cin>>s[i];
        tmp = 0;
        flag = 0;
        for(int j=0; j<L; j++){
            if(s[i][j] == '1'){
                flag = 1;
            }else if(flag == 1 && s[i][j] == '0'){
                tmp++;
                flag = 0;
            }
        }
        if(flag == 1){
            tmp++;
        }
        ss[i] = tmp;
        if(tmp > b){
            b = tmp;
        }
    }
    for(int i=0; i<N; i++){
        if(ss[i] == b){
            cnt++;
        }
    }
    cout<<b<<" "<<cnt<<"\n";
    return 0;
}