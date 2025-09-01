#include <iostream>
using namespace std;
int reverse_int(int n){
    int re = 0;
    while(n > 0){
        re = re * 10 + n %10;
        n /= 10;
    }
    return re;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, a, b;
    cin>>T;
    while(T--){
        cin>>a>>b;
        int r_a = reverse_int(a);
        int r_b = reverse_int(b);
        int r_c = reverse_int(r_a + r_b);
        cout<<r_c<<"\n";
    }
    return 0;
}