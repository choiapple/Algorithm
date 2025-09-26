#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp;
    long long total = 0;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>tmp;
        total += tmp;
        total %= 3;
    }
    if(total%3 == 0) cout<<"yes";
    else cout<<"no";
}