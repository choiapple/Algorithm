#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0, LR = 0, SK = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] == 'S'){
            SK++;
        }else if(s[i] == 'K'){
            if(SK > 0){
                answer++;
                SK--;
            }else{
                break;
            }
        }else if(s[i] == 'L'){
            LR++;
        }else if(s[i] == 'R'){
            if(LR > 0){
                answer++;
                LR--;
            }else{
                break;
            }
        }else if(s[i] - '0' >= 1 && s[i] - '0' <= 9){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}