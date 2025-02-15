#include <iostream>
using namespace std;
int N, num[101] = {0, }, strike[101] = {0, }, ball[101] = {0, }, answer = 0;
int visit[10] = {0, };
int check_strike(int a, int b){
    int cnt = 0;
    for(int i=0; i<3; i++){
        if(a%10 == b%10){
            cnt++;
        }
        a /= 10;
        b /= 10;
    }
    return cnt;
}
int check_ball(int a, int b){
    int cnt = 0;
    for(int i=0; i<3; i++){
        int m_b = b%10;
        int tmp = a;
        for(int j=0; j<3; j++){
            if(i != j && tmp%10 == m_b){
                cnt++;
            }
            tmp /= 10;
        }
        b /= 10;
    }
    return cnt;
}
void find(int cnt, int tmp){
    if(cnt == 3){
        int check = 0;
        for(int i=0; i<N; i++){
            int cs = check_strike(num[i], tmp);
            int cb = check_ball(num[i], tmp);
            if(cs != strike[i] || cb != ball[i]){
                check = 1;
                break;
            }
        }
        if(check == 0) answer++;
        return;
    }
    for(int i=1; i<=9; i++){
        if(visit[i] == 0){
            visit[i] = 1;
            find(cnt+1, tmp*10+i);
            visit[i] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>num[i]>>strike[i]>>ball[i];
    }
    find(0, 0);
    cout<<answer<<"\n";
}