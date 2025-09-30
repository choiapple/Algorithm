#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool compare(double a, double b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, K, i;
    double arr[101] = {0, }, s, answer = 0;
    cin>>N>>M>>K;
    for(int m=0; m<M; m++){
        for(int n=0; n<N; n++){
            cin>>i>>s;
            if(arr[i] < s) arr[i] = s;
        }
    }
    sort(arr+1, arr+N+1, compare);
    for(int k=1; k<=K; k++){
        answer += arr[k];
    }
    answer = round(answer * 10) / 10.0;
    cout<<fixed;
    cout.precision(1);
    cout<<answer<<"\n";
    return 0;
}