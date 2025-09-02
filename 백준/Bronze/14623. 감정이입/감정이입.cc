#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long tran(string s){
    long long re = 0, two = 1;
    int len = s.length();
    while(len > 0){
        re += (s[len-1] - '0') * two;
        two *= 2;
        len--;
    }
    return re;
}
int main(){
    string a, b, c = "";
    cin>>a>>b;
    long long t_a, t_b, t_c;
    t_a = tran(a);
    t_b = tran(b);
    t_c = t_a * t_b;
    while(t_c > 0){
        c += to_string(t_c & 1);
        t_c = t_c>>1;
    }
    reverse(c.begin(), c.end());
    cout<<c<<"\n";
    return 0;
}