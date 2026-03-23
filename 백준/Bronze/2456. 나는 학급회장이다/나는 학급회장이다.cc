#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[4] = {0, }, arr2[4] = {0, }, tmp, max_n = 0, max_idx, max_m;
    cin>>N;
    for(int n=0; n<N; n++){
        for(int i=1; i<=3; i++){
            cin>>tmp;
            arr[i] += tmp;
            if(tmp == 3) arr2[i]++;
        }
    }
    for(int i=1; i<=3; i++){
        if(max_n < arr[i]){
            max_n = arr[i];
            max_m = arr2[i];
            max_idx = i;
        }else if(max_n == arr[i]){
            if(max_m == arr2[i]){
                max_idx = 0;
            }else if(max_m < arr2[i]){
                max_m = arr2[i];
                max_idx = i;
            }
        }
    }
    cout<<max_idx<<" "<<max_n;
    return 0;
}