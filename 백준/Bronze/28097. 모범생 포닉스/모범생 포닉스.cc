#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, sum_t = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        sum_t += tmp + 8;
    }
    sum_t -= 8;
    cout<<sum_t/24<<" "<<sum_t%24<<"\n";
    return 0;
}