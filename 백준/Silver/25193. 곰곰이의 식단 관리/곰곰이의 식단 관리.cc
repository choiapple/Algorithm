#include <iostream>
using namespace std;
int main(){
    int N, ckCnt = 0, tmp;
    string s;
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] == 'C'){
            ckCnt++;
        }
    }
    tmp = N - ckCnt + 1;
    if(ckCnt%tmp == 0){
        cout<<ckCnt/tmp<<"\n";
    }else{
        cout<<ckCnt/tmp + 1<<"\n";
    }
}