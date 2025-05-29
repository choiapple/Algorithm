#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, X, tmp, s = 0;
    cin>>N>>X;
    for(int n=0; n<N; n++){
        cin>>tmp;
        s+=tmp;
    }
    if(s%X == 0){
        cout<<1<<"\n";
    }else{
        cout<<0<<"\n";
    }
    return 0;
}