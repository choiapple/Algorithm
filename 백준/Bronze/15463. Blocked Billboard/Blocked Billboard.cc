#include <iostream>
using namespace std;
int arr[2001][2001] = {0, };
int main(){
    int x1, y1, x2, y2, answer = 0;
    for(int i=0; i<3; i++){
        cin>>x1>>y1>>x2>>y2;
        for(int j=y1+1000; j<y2+1000; j++){
            for(int k=x1+1000; k<x2+1000; k++){
                if(i != 2) arr[j][k] = 1;
                else arr[j][k] = 0;
            }
        }
    }
    for(int i=0; i<=2000; i++){
        for(int j=0; j<=2000; j++){
            if(arr[i][j] == 1){
                answer++;
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}