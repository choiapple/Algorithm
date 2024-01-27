#include <iostream>
using namespace std;
int P, N, tmp;
int arr[101] = {0, };
void checkUp(int x, int y){
    int k = x+1;
    int flag = 0;
    int z = 0;
    while(true){
        if(k <= P){
            if(arr[k] > 0){
            if(arr[k] != y){
                k++;
            }else if(arr[k] == y){
                z = k;
                break;
            }
            }else{
                flag = 1;
            }
        }else{
            flag = 1;
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 1) return;
    for(int i=x+1; i<z; i++){
        arr[i] = 0;
    }
    return;
}
void checkDown(int x, int y){
    int k = x-1;
    int flag = 0;
    int z = 0;
    while(true){
        if(k >= 1){
            if(arr[k] > 0){
                if(arr[k] != y){
                    k--;
                }else if(arr[k] == y){
                    z = k;
                    break;
                }
            }else{
                flag = 1;
            }
        }else{
            flag = 1;
        }
        
        if(flag == 1){
            break;
        }
    }
    if(flag == 1) return;
    for(int i=z+1; i<x; i++){
        arr[i] = 0;
    }
    return;
}
int main(){
    cin>>P>>N;
    int flag = 0;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(flag == 0){
            arr[tmp] = 1;
            flag = 1;
        }else{
            arr[tmp] = 2;
            flag = 0;
        }
        checkUp(tmp, arr[tmp]);
        checkDown(tmp, arr[tmp]);
    }
    int white = 0;
    int black = 0;
    for(int i=1; i<=P; i++){
        if(arr[i] == 1){
            white++;
        }
        if(arr[i] == 2){
            black++;
        }
    }
    cout<<white<<" "<<black<<"\n";
    return 0;
}





