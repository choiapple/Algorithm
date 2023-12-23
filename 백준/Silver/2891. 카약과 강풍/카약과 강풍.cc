#include <iostream>
using namespace std;
int main(){
    int N, S, R, tmp;
    cin>>N>>S>>R;
    int arr[11] = {0, };
    int arr2[11] = {0, };
    for(int i=0; i<S; i++){
        cin>>tmp;
        arr[tmp] = 1;
    }
    for(int i=0; i<R; i++){
        cin>>tmp;
        arr2[tmp] = 1;
        if(arr[tmp] == 1){
            arr2[tmp] = 0;
            arr[tmp] = 0;
        }
    }
    for(int i=1; i<=10; i++){
       if(arr[i] == 1){
            for(int j=1; j<=10; j++){
                if(j == i-1 || j == i+1){
                    if(arr2[j] == 1){
                        arr[i] = 0;
                        arr2[j] = 0;
                        break;
                    }
                }
            }
        }
    }
    int answer = 0;
    for(int i=1; i<=10; i++){
        if(arr[i] == 1){
            answer++;
        }
    }
    cout<<answer<<"\n";
}