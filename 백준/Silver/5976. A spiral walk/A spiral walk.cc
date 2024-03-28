#include <iostream>
using namespace std;
int arr[751][751] = {0, };
int n, k = 1;
int bang = 0;
int sy = 0;
int sx = 0;
void right(){
    arr[sy][sx] = k;
    k++;
    if(sx+1 < n && arr[sy][sx+1] == 0){
        sx++;
        right();
        return;
    }
    sy++;
    bang++;
    return;
}
void down(){
    arr[sy][sx] = k;
    k++;
    if(sy+1 < n && arr[sy+1][sx] == 0){
        sy++;
        down();
        return;
    }
    sx--;
    bang++;
    return;
}
void left(){
    arr[sy][sx] = k;
    k++;
    if(sx-1 >= 0 && arr[sy][sx-1] == 0){
        sx--;
        left();
        return;
    }
    sy--;
    bang++;
    return;
}
void up(){
    arr[sy][sx] = k;
    k++;
    if(sy-1 >= 0 && arr[sy-1][sx] == 0){
        sy--;
        up();
        return;
    }
    sx++;
    bang++;
    return;
}
int main(){
    cin>>n;
    while(k <= n*n){
        if(bang%4 == 0){
            right();
        }else if(bang%4 == 1){
            down();
        }else if(bang%4 == 2){
            left();
        }else{
            up();
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}