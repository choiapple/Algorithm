#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, len, answer = 0;
    string S, ss;
    cin>>N>>S;
    len = S.length();
    for(int n=0; n<N; n++){
        cin>>ss>>tmp;
        if(ss == S){
            answer += tmp;
            continue;
        }
        int flag = 0;
        string sss = "";
        for(int i=0; i<ss.length(); i++){
            if(ss[i] != '_'){
                sss += ss[i];
            }else{
                if(sss == S){
                    flag = 1;
                    break;
                }
                sss = "";
            }
        }
        if(sss == S) flag = 1;
        if(flag == 1) answer += tmp;
    }
    cout<<answer;
    return 0;
}