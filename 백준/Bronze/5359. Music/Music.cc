#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n, m, c, arr[21] = {0, }, min_n = 1001, max_n = 0, answer = 0;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>n>>m>>c;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        answer = 0;
        for(int i=0; i<=n-m; i++){
            min_n = 1001;
            max_n = 0;
            for(int j=i; j<i+m; j++){
                if(arr[j] < min_n) min_n = arr[j];
                if(arr[j] > max_n) max_n = arr[j];
            }
            if(max_n - min_n <= c) answer++;
        }
        cout<<answer<<"\n";
    }
    return 0;
}