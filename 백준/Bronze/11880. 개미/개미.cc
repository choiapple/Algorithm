#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, a, b, c;
    long long answer;
    cin>>T;
    while(T--){
        cin>>a>>b>>c;
        answer = pow(a, 2) + pow(b+c, 2);
        answer = min(answer, (long long)(pow(b, 2) + pow(a+c, 2)));
        answer = min(answer, (long long)(pow(c, 2) + pow(a+b, 2)));
        cout<<answer<<"\n";
    }
    return 0;
}