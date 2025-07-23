#include <iostream>
using namespace std;
int main(){
    string mim[7] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    }, tmp;
    int N, answer = 0, flag = 0;
    cin>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        getline(cin, tmp);
        flag = 0;
        for(int j=0; j<7; j++){
            if(tmp == mim[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0) answer = 1;
    }
    if(answer == 1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}