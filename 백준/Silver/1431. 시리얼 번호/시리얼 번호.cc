#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool compare(string a, string b){
    int a_len = a.length();
    int b_len = b.length();
    if(a_len != b_len){
        return a_len < b_len;
    }
    int a_tmp = 0;
    int b_tmp = 0;
    for(int i=0; i<a_len; i++){
        if(a[i] - '0' >= 0 && a[i] - '0' <= 9){
            a_tmp += a[i] - '0';
        }
        if(b[i] - '0' >= 0 && b[i] - '0' <= 9){
            b_tmp += b[i] - '0';
        }
    }
    if(a_tmp != b_tmp) {
        return a_tmp < b_tmp;
    }
    return a<b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    string s[51];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s[i];
    }
    sort(s, s+N, compare);
    for(int i=0; i<N; i++){
        cout<<s[i]<<"\n";
    }
    return 0;
}