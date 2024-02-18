#include <iostream>
using namespace std;
int main(){
    int n;
    while(true){
        cin>>n;
        if(n == -1) break;
        int arr[101] = {0, };
        arr[n] = 1;
        int answer = 0;
        while(true){
            cin>>n;
            if(n == 0) break;
            arr[n] = 1;
        }
        for(int i=1; i<=100; i++){
            if(arr[i] == 1 && arr[i*2] == 1){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}