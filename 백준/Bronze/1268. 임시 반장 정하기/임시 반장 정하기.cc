#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[1001][6] = {0, };
    int visit[1001][1001] = {0, };
    for(int i=1; i<=N; i++){
        for(int j=1; j<=5; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=N; j++){
            int tmp = arr[j][i];
            for(int k=1; k<=N; k++){
                if(j != k && tmp == arr[k][i]){
                    visit[j][k] = 1;
                }
            }
        }
    }
    int max_num = 0;
    int answer = 1;
    for(int i=1; i<=N; i++){
        int tmp = 0;
        for(int j=1; j<=N; j++){
            if(visit[i][j] == 1){
                tmp++;
            }
        }
        if(max_num < tmp){
            max_num = tmp;
            answer = i;
        }
    }
    cout<<answer<<"\n";
    return 0;
}