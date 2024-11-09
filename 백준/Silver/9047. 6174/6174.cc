#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, arr[4] = {0, }, answer = 0, max_n, min_n;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        answer = 0;
        while(true){
            if(tmp == 6174) break;
            answer++;
            for(int i=0; i<4; i++){
                arr[i] = tmp%10;
                tmp /= 10;
            }
            sort(arr, arr+4);
            max_n = 0;
            for(int i=3; i>=0; i--){
                max_n = max_n*10 + arr[i];
            }
            min_n = 0;
            for(int i=0; i<4; i++){
                min_n = min_n*10 + arr[i];
            }
            tmp = max_n - min_n;
        }
        cout<<answer<<"\n";
    }
}