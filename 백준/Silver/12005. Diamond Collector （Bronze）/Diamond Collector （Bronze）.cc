#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, dia[1001];
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>dia[i];
    }
    sort(dia, dia + N);
    int max = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(dia[j] - dia[i] <= K && j - i + 1 > max) max = j - i + 1;
        }
    }
    cout<<max;
    return 0;
}