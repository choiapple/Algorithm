#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[51] = {0, };
    string answer = "yes";
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i == j) continue;
            for(int k=0; k<N; k++){
                if(i == k) continue;
                if(j == k) continue;
                if((arr[i] - arr[j]) % arr[k] != 0){
                    answer = "no";
                }
            }
        }
    }
    cout<<answer;
    return 0;
}