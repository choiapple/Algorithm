#include <iostream>
using namespace std;
int main(){
    int N, xx, yy, answer = 0;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};
    cin>>N;
    cin>>xx>>yy;
    for(int i=0; i<4; i++){
        int nx = xx + dx[i];
        int ny = yy + dy[i];
        if(nx <= 0 || nx > N || ny <= 0 || ny > N) continue;
        answer++;
    }
    cout<<answer<<"\n";
    return 0;
}