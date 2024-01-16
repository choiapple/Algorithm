#include <iostream>
using namespace std;
int main(){
    int T, R, C;
    cin>>T;
    int answer = 0;
    for(int t=0; t<T; t++){
        cin>>R>>C;
        string arr[500];
        answer = 0;
        for(int i=0; i<R; i++){
            cin>>arr[i];
        }
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                if(arr[i][j] == 'o'){
                    if(i-1 >= 0 && i+1 < R){
                        if(arr[i-1][j] == 'v' && arr[i+1][j] == '^'){
                            answer++;
                        }
                    }
                    if( j - 1 >= 0 && j + 1 < C){
                        if(arr[i][j-1] == '>' && arr[i][j+1] == '<'){
                            answer++;
                        }
                    }
                }
            }
        }
        cout<<answer<<"\n";
    }
}