#include <iostream>
using namespace std;
int re(int num) {
    while(num%10 == 0){
        num /= 10;
    }
    return num;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, tmp = 1;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        tmp = 1;
        for(int i=1; i<=N; i++){
            tmp *= i;
            tmp %= 100000;
            tmp = re(tmp);
        }
        cout<<tmp%10<<"\n";
    }
    return 0;
}