#include <iostream>
using namespace std;
int N, arr[11] = {0, }, answer = 0, com[4];
void re(int cnt, int k, int tmp[4]){
    if(cnt == 3){
        int a = 1;
        int b = 1;
        int c = 1;
        int d = 1;
        for(int n=0; n<=tmp[0]; n++){
            a *= arr[n];
        }
        for(int n=tmp[0]+1; n<=tmp[1]; n++){
            b *= arr[n];
        }
        for(int n=tmp[1]+1; n<=tmp[2]; n++){
            c *= arr[n];
        }
        for(int n=tmp[2]+1; n<N; n++){
            d *= arr[n];
        }
        if(a+b+c+d > answer){
            answer = a + b + c + d;
        }
        return;
    }
    if(k >= N-1) return;
    tmp[cnt] = k;
    re(cnt+1, k+1, tmp);
    re(cnt, k+1, tmp);
}
int main(){
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>arr[n];
    }
    re(0, 0, com);
    cout<<answer<<"\n";
}