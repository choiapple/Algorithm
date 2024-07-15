#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, P=0, D=0;
    cin>>N;
    char c1;
    for(int i=0; i<N; i++){
        cin>>c1;
        if(c1 == 'P'){
            P++;
        }else{
            D++;
        }
        if(abs(P-D) >= 2){
            cout<<D<<":"<<P<<"\n";
            return 0;
        }
    }
    cout<<D<<":"<<P<<"\n";
    return 0;
}