#include <iostream>
using namespace std;
int main(){
    int T, A, ans = 0;
    cin>>T;
    for(int i=0; i<5; i++){
        cin>>A;
        if(T == A){
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}