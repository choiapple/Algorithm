#include <iostream>
#include <cmath>
using namespace std;
int N, answer = -2147000000;
string s;
int cal(int a, int b, char c){
    if(c == '*') return a * b;
    else if(c == '+') return a + b;
    else if(c == '-') return a - b;
}
void recur(int idx, int cur){
    if(idx > N-1){
        answer = max(answer, cur);
        return;
    }
    char c = idx == 0 ? '+': s[idx-1];
    if(idx + 2 < N){
        int bracket = cal(s[idx] - '0', s[idx+2] - '0', s[idx+1]);
        recur(idx+4, cal(cur, bracket, c));
    }
    recur(idx+2, cal(cur, s[idx]-'0', c));
}
int main(){
    cin>>N>>s;
    recur(0, 0);
    cout<<answer<<"\n";
    return 0;
}