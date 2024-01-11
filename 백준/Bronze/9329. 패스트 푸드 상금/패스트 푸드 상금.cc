#include <iostream>
using namespace std;
int main(){
    int T, n, m, k;
    int answer = 0;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>n>>m;
        int arr[101][101] = {0, };
        answer = 0;
        for(int i=0; i<n; i++){
            cin>>k;
            arr[i][0] = k;
            for(int j=1; j<=k+1; j++){
                cin>>arr[i][j];
            }
        }
        for(int i=1; i<=m; i++){
            cin>>arr[n][i];
        }
        for(int i=0; i<n; i++){
            k = arr[i][0];
            int min_n = 101;
            for(int j=1; j<=k; j++){
                int tmp = arr[i][j];
                if(min_n > arr[n][tmp]){
                    min_n = arr[n][tmp];
                }
            }
            answer += min_n * arr[i][k+1];
        }
        cout<<answer<<"\n";
    }
}