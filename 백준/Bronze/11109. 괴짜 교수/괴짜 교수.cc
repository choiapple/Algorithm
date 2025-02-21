#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, d, n, s, p, st, pt;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>d>>n>>s>>p;
        st = n * s;
        pt = d + n * p;
        if(st < pt){
            cout<<"do not parallelize"<<"\n";
        }else if(st > pt){
            cout<<"parallelize"<<"\n";
        }else{
            cout<<"does not matter"<<"\n";
        }
    }
    return 0;
}