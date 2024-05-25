#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, a, b;
    int s_y=10001, s_x=10001, b_y=-10001, b_x=-10001;
    cin>>N;
    if(N == 1){
        cin>>a>>b;
        cout<<0<<"\n";
        return 0;
    }
    for(int i=0; i<N; i++){
        cin>>a>>b;
        if(a < s_x) s_x = a;
        if(b < s_y) s_y = b;
        if(a > b_x) b_x = a;
        if(b > b_y) b_y = b;
    }
    cout<<(b_y - s_y) * (b_x - s_x)<<"\n";
    return 0;
}