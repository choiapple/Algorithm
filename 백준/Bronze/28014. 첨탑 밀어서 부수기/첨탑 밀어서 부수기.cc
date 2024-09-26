#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, cur, pre, answer = 0;
    cin>>N;
    cin>>pre;
    answer++;
    for(int i=1; i<N; i++){
        cin>>cur;
        if(cur >= pre){
            answer++;
        }
        pre = cur;
    }
    cout<<answer<<"\n";
    return 0;
}