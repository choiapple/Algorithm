#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double T, c, y, su, sa, f;
    int b, gs, gc, w, answer = 0, x;
    cin>>T;
    for(int i=0; i<T; i++){
        cin.ignore();
        cin>>c>>y>>su>>sa>>f;
        cin>>b>>gs>>gc>>w;
        answer = 0;
        x = min(c/8, min(y/8, min(su/4, min(sa/1, f/9)))) * 16;
        answer = min(x, b/1 + gs/30 + gc/25 + w/10);
        cout<<answer<<"\n";
    }
}