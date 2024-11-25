#include <iostream>
#include <cmath>
using namespace std;
int rh, rv, sh, sv, N, rhi, rvi, shi, svi, pi, result=2147000000, tem;

int calculate(int a, int b, int c, int d, int price){
    int highest_h, highest_v;
    highest_h = max(ceil((double)rh/a), ceil((double)sh/c));
    
    highest_v = max(ceil((double)rv/b), ceil((double)sv/d));
    
    return highest_h * highest_v * price;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>rh>>rv>>sh>>sv;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>rhi>>rvi>>shi>>svi>>pi;
        result = min(result, min(calculate(rhi, rvi, shi, svi, pi), calculate(rvi, rhi, svi, shi, pi)));
    }
    cout<<result<<"\n";
    return 0;
}