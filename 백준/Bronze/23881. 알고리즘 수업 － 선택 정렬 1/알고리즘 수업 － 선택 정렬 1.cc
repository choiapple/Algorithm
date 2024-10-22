#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, max, tmp, check = 0, arr[10001] = {0, }, answer1, answer2;
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=N-1; i>=0; i--){
        max = 0;
        for(int j=0; j<=i; j++){
            if(max < arr[j]){
                max = arr[j];
                tmp = j;
            }
        }
        if(tmp != i){
            arr[tmp] = arr[i];
            arr[i] = max;
            check++;
            if(check == K){
                answer1 = arr[tmp];
                answer2 = arr[i];
            }
        }
    }
    if(check < K){
        cout<<-1<<"\n";
    }else{
        cout<<answer1<<" "<<answer2<<"\n";
    }
}