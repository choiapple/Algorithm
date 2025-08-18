#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, D, answer = 0;
    double a, b, c;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N>>D;
        answer = 0;
        for(int n=0; n<N; n++){
            cin>>a>>b>>c;
            if((a*b)/c >= D){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}