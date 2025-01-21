#include <iostream>
using namespace std;
int map[6][6] = {0, };
int visit[6][6] = {0, };
bool check(){
    int cnt = 0;
    int flag = 0;
    for(int i=0; i<5; i++){
        flag = 0;
        for(int j=0; j<5; j++){
            if(visit[i][j] == 0) flag = 1;
        }
        if(flag == 0) cnt++;
    }
    for(int i=0; i<5; i++){
        flag = 0;
        for(int j=0; j<5; j++){
            if(visit[j][i] == 0) flag = 1;
        }
        if(flag == 0) cnt++;
    }
    flag = 0;
    for(int i=0; i<5; i++){
        if(visit[i][i] == 0) flag = 1;
    }
    if(flag == 0){
        cnt++;
    }
    flag = 0;
    for(int i=0; i<5; i++){
        if(visit[i][4-i] == 0){
            flag = 1;
        }
    }
    if(flag == 0) cnt++;
    if(cnt >= 3){
        return true;
    }else{
        return false;
    }
}
void vi(int tmp){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(map[i][j] == tmp){
                visit[i][j] = 1;
                return;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tmp, cnt = 0, answer = 25;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>map[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>tmp;
            cnt++;
            vi(tmp);
            if(check() && cnt <= answer){
                answer = cnt;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}