#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, max = 0, total = 0, C;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>C;
        total += C;
        if(max < C){
            max = C;
        }
    }
    cout<<total - max<<"\n";
    return 0;
}