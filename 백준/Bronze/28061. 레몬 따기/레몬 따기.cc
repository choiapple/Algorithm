#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        if(tmp - N + i > answer){
            answer = tmp - N + i;
        }
    }
    cout<<answer<<"\n";
    return 0;
}