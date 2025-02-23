#include <iostream>
using namespace std;
int arr[1000][1000] = {0, };
void re(int x, int y, int cnt) {
    if(cnt <= 0) return;
    for(int i=x; i<x+cnt; i++){
        for(int j=y; j<y+cnt; j++){
            if(i == x || i == x+cnt-1){
                arr[i][j] = 1;
                continue;
            }
            if(j == y || j == y+cnt-1){
                arr[i][j] = 1;
            }
        }
    }
    re(x+2, y+2, cnt-4);
}
int main(){
    int N, tmp;
    cin>>N;
    tmp = (N - 1) * 4 + 1;
    re(0, 0, tmp);
    for(int i=0; i<tmp; i++){
        for(int j=0; j<tmp; j++){
            if(arr[i][j] == 1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}