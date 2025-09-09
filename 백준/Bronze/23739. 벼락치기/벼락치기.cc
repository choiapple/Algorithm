#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0, mi = 30, N, tmp;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(tmp/2.0 <= mi){
            answer++;
        }
        if(tmp >= mi){
            mi = 30;
        }else if(tmp < mi){
            mi -= tmp;
        }
    }
    cout<<answer<<"\n";
    return 0;
}