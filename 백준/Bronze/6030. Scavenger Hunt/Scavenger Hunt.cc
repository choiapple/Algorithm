#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int P, Q;
    cin>>P>>Q;
    for(int p=1; p<=P; p++){
        if(P%p != 0) continue;
        for(int q=1; q<=Q; q++){
            if(Q%q != 0) continue;
            cout<<p<<" "<<q<<"\n";
        }
    }
}