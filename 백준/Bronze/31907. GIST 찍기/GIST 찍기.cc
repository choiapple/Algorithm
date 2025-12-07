#include <iostream>
using namespace std;
int main(){
    string gist[3] = {"G...", ".I.T", "..S."};
    char answer[1000][1000];
    int K;
    cin>>K;
    for(int i=0; i<3*K; i+=K){
        for(int j=0; j<4*K; j+=K){
            for(int x=i; x<i+K; x++){
                for(int y=j; y<j+K; y++){
                    answer[x][y] = gist[i/K][j/K];
                }
            }
        }
    }
    for(int i=0; i<3*K; i++){
        for(int j=0; j<4*K; j++){
            cout<<answer[i][j];
        }
        cout<<"\n";
    }
}