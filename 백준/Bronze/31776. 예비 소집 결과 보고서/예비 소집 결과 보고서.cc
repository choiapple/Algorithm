#include <iostream>
using namespace std;
int arr[3] = {0, };
bool checkAnswer(){
    bool flag = false;
    for(int i=0; i<3; i++){
        if(arr[i] != -1){
            flag = true;
        }
    }
    return flag;
}
bool checkTime(){
    bool flag = false;
    if(arr[0] != -1){
        if(arr[1] >= arr[0]){
            if(arr[2] >= arr[1] || arr[2] == -1){
                flag = true;
            }
        }else if(arr[1] == -1 && arr[2] == -1){
            flag = true;
        }
    }
    return flag;
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