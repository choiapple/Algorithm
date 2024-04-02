#include <iostream>
using namespace std;
int N;
int arr[21][21];
int answer = 0;
void right(){
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=N-1; j>=0; j--){
            int tmp = j;
            if(arr[i][j] == 0) continue;
            while(tmp < N-1){
                if(arr[i][tmp+1] == 0){
                    arr[i][tmp+1] = arr[i][tmp];
                    arr[i][tmp] = 0;
                    tmp++;
                }else{
                    break;
                }
            }
        }
    }
    // 합치기
    for(int i=0; i<N; i++){
        for(int j=N-1; j>0; j--){
            if(arr[i][j] == arr[i][j-1]){
                arr[i][j] = arr[i][j] + arr[i][j-1];
                arr[i][j-1] = 0;
                j--;
            }
        }
    }
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=N-1; j>=0; j--){
            int tmp = j;
            if(arr[i][j] == 0) continue;
            while(tmp < N-1){
                if(arr[i][tmp+1] == 0){
                    arr[i][tmp+1] = arr[i][tmp];
                    arr[i][tmp] = 0;
                    tmp++;
                }else{
                    break;
                }
            }
        }
    }
}
void left(){
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int tmp = j;
            if(arr[i][j] == 0) continue;
            while(tmp > 0){
                if(arr[i][tmp-1] == 0){
                    arr[i][tmp-1] = arr[i][tmp];
                    arr[i][tmp] = 0;
                    tmp--;
                }else{
                    break;
                }
            }
        }
    }
    // 합치기
    for(int i=0; i<N; i++){
        for(int j=0; j<N-1; j++){
            if(arr[i][j] == arr[i][j+1]){
                arr[i][j] = arr[i][j] + arr[i][j+1];
                arr[i][j+1] = 0;
                j++;
            }
        }
    }
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int tmp = j;
            if(arr[i][j] == 0) continue;
            while(tmp > 0){
                if(arr[i][tmp-1] == 0){
                    arr[i][tmp-1] = arr[i][tmp];
                    arr[i][tmp] = 0;
                    tmp--;
                }else{
                    break;
                }
            }
        }
    }
}
void down(){
     // 옮기기
    for(int i=0; i<N; i++){
        for(int j=N-1; j>=0; j--){
            int tmp = j;
            if(arr[j][i] == 0) continue;
            while(tmp < N-1){
                if(arr[tmp+1][i] == 0){
                    arr[tmp+1][i] = arr[tmp][i];
                    arr[tmp][i] = 0;
                    tmp++;
                }else{
                    break;
                }
            }
        }
    }
    // 합치기
    for(int i=0; i<N; i++){
        for(int j=N-1; j>0; j--){
            if(arr[j][i] == arr[j-1][i]){
                arr[j][i] = arr[j][i] + arr[j-1][i];
                arr[j-1][i] = 0;
                j--;
            }
        }
    }
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=N-1; j>=0; j--){
            int tmp = j;
            if(arr[j][i] == 0) continue;
            while(tmp < N-1){
                if(arr[tmp+1][i] == 0){
                    arr[tmp+1][i] = arr[tmp][i];
                    arr[tmp][i] = 0;
                    tmp++;
                }else{
                    break;
                }
            }
        }
    }
}
void up(){
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int tmp = j;
            if(arr[j][i] == 0) continue;
            while(tmp > 0){
                if(arr[tmp-1][i] == 0){
                    arr[tmp-1][i] = arr[tmp][i];
                    arr[tmp][i] = 0;
                    tmp--;
                }else{
                    break;
                }
            }
        }
    }
    // 합치기
    for(int i=0; i<N; i++){
        for(int j=0; j<N-1; j++){
            if(arr[j][i] == arr[j+1][i]){
                arr[j][i] = arr[j][i] + arr[j+1][i];
                arr[j+1][i] = 0;
                j++;
            }
        }
    }
    // 옮기기
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int tmp = j;
            if(arr[j][i] == 0) continue;
            while(tmp > 0){
                if(arr[tmp-1][i] == 0){
                    arr[tmp-1][i] = arr[tmp][i];
                    arr[tmp][i] = 0;
                    tmp--;
                }else{
                    break;
                }
            }
        }
    }
}
void dfs(int move){
    if(move == 5){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(arr[i][j] > answer){
                    answer = arr[i][j];
                }
            }
        }
        return;
    }
    int tmp[21][21] = {0, };
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            tmp[i][j] = arr[i][j];
        }
    }
    for(int i=0; i<4; i++){
        if(i == 0){
            right();
            dfs(move+1);
        }else if(i == 1){
            left();
            dfs(move+1);
        }else if(i == 2){
            down();
            dfs(move+1);
        }else{
            up();
            dfs(move+1);
        }
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                arr[j][k] = tmp[j][k];
            }
        }
    }
}
int main(){
    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>arr[i][j];
        }
    }
    dfs(0);
    cout<<answer<<"\n";
    return 0;
}