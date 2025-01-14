#include <iostream>
#include <cmath>
using namespace std;
int RSP(int fr, int sa){
    if(fr == sa){
        return 1;
    }else if(fr == 'S' && sa == 'R'){
        return 2;
    }else if(fr == 'P' && sa == 'S'){
        return 2;
    }else if(fr == 'R' && sa == 'P'){
        return 2;
    }else{
        return 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int R, N, answer1 = 0, answer2 = 0;
    string sang, fri[51];
    cin>>R;
    cin>>sang;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>fri[n];
    }
    for(int n=0; n<N; n++){
        for(int r=0; r<R; r++){
            answer1 += RSP(fri[n][r], sang[r]);
        }
    }
    for(int r=0; r<R; r++){
        int rr = 0;
        int ss = 0;
        int pp = 0;
        for(int n=0; n<N; n++){
            rr += RSP(fri[n][r], 'R');
            ss += RSP(fri[n][r], 'S');
            pp += RSP(fri[n][r], 'P');
        }
        answer2+= max(rr, max(ss, pp));
    }
    cout<<answer1<<"\n"<<answer2<<"\n";
    return 0;
}