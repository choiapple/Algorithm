#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[100001] = {0, };
    long long answer = 0, tmp = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        answer += arr[i];
        tmp += arr[i] * arr[i];
    }
    answer = (answer * answer - tmp)/2;
    cout<<answer<<"\n";
    return 0;
}