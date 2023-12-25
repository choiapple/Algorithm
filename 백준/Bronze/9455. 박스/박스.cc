#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, m, n;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>m>>n;
        int arr[101][101] = {0, };
        int answer = 0;
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                cin>>arr[j][k];
            }
        }
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                if(arr[j][k] == 1){
                    for(int x=j; x<m; x++){
                        if(arr[x][k] == 0){
                            answer++;
                        }
                    }
                }
            }
        }
        cout<<answer<<"\n";
    }
}