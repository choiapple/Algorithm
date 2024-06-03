#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, C, X, Y, min_n, min_n2, answer = 0;
    cin>>A>>B>>C>>X>>Y;
    min_n = min(X, Y); min_n2 = min(A+B, C*2);
    X -= min_n; Y -= min_n;
    answer += min_n*min_n2;
    min_n = min(A, C*2);
    answer += min_n * X;
    min_n = min(B, C*2);
    answer += min_n * Y;
    cout<<answer<<"\n";
    return 0;
}