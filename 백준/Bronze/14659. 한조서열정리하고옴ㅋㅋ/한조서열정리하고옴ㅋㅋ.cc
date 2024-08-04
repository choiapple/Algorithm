#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, max_n = 0, cur, next, tmp = 0;
    cin>>N;
    cin>>cur;
    for(int i=1; i<N; i++){
        cin>>next;
        if(next < cur){
            tmp++;
        }else{
            if(tmp > max_n){
                max_n = tmp;
            }
            cur = next;
            tmp = 0;
        }
    }
    if(tmp > max_n){
        max_n = tmp;
    }
    cout<<max_n<<"\n";
    return 0;
}