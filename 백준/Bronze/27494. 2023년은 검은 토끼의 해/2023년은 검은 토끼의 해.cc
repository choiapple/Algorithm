#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, cnt = 0, len, k;
    string s, compare = "2023";
    cin>>N;
    for(int n=1; n<=N; n++){
        s = to_string(n);
        len = s.length();
        k = 0;
        for(int i=0; i<len; i++){
            if(compare[k] == s[i]){
                k++;
            }
        }
        if(k == 4){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}