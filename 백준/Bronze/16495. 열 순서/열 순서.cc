#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long answer = 0;
    int tmp = s.length();
    long long k = 1;
    while(tmp > 0){
        answer += (s[tmp-1] - 'A' + 1) * k;
        tmp--;
        k *= 26;
    }
    cout<<answer<<"\n";
}