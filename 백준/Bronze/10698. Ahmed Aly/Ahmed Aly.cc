#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, x, y, z;
    char pm, e;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>x>>pm>>y>>e>>z;
        cout<<"Case "<<t<<": ";
        if(pm == '+' && x + y == z){
            cout<<"YES"<<"\n";
        }else if(pm == '-' && x - y == z){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}