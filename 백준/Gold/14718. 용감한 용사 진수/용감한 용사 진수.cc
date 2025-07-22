#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, answer = 3000001;
    int arr[101][3] = {0, }, a, b, c, tmp;
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                a = arr[i][0];
                b = arr[j][1];
                c = arr[k][2];
                tmp = 0;
                for(int x=0; x<N; x++){
                    if(arr[x][0] <= a && arr[x][1] <= b && arr[x][2] <= c){
                        tmp++;
                    }
                }
                if(tmp >= K && answer > a+b+c){
                    answer = a + b + c;
                }
            }
        }
    }
    cout<<answer<<"\n";
    return 0;
}