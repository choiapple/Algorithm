#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, i, cnt;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        i = 2;
        cnt = 0;
        while(N > 1){
            if(N%i == 0){
                cnt++;
                N/=i;
            }else{
                if(cnt > 0){
                    cout<<i<<" "<<cnt<<"\n";
                }
                cnt = 0;
                i++;
            }
        }
        cout<<i<<" "<<cnt<<"\n";
    }
}