#include <iostream>
using namespace std;
int arr[3] = {0, };
bool checkAnswer(){
    for(int i=0; i<3; i++){
        if(arr[i] != -1) return true;
    }
    return false;
}
bool checkTime(){
    bool flag = false;
    for(int i=0; i<3; i++){
        if(arr[i] == -1){
            flag = true;
        }else{
            if(flag) return false;
        }
    }
    for(int i=1; i<3; i++){
        if(arr[i] != -1 && arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[0]>>arr[1]>>arr[2];
        if(checkAnswer() && checkTime()){
            answer++;
        }
    }
    cout<<answer;
    return 0;
}