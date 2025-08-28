#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m, tmp;
    cin>>n>>m;
    while(n--){
        cin>>tmp;
        m -= tmp - 1;
    }
    cout<<(m<=0 ? "DIMI":"OUT");
    return 0;
}