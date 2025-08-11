#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    double x, tmp, pre = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        x = 1 - (1 - pre) * (1 - tmp/100);
        pre = x;
        cout<<fixed;
        cout.precision(6);
        cout<<x * 100<<"\n";
    }
}