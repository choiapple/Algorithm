#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, answer;
    double min_n, tmp, W, C;
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N;
        min_n = 2147000000;
        answer = 0;
        for(int n=0; n<N; n++){
            cin>>W>>C;
            tmp = C/W;
            if(min_n > tmp){
                answer = C;
                min_n = C/W;
            }else if(min_n == tmp && answer > C){
                answer = C;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}