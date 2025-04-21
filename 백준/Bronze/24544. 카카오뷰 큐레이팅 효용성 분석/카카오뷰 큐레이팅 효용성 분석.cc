#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[1001] = {0, }, tmp;
    long long answer = 0, answer2 = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        answer += arr[i];
    }
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(tmp == 0){
            answer2 += arr[i];
        }
    }
    cout<<answer<<"\n"<<answer2<<"\n";
    return 0;
}