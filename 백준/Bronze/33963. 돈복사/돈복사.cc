#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, tmp, answer = 0;
    cin>>N;
    tmp = N;
    while(true){
        tmp *= 2;
        string s = to_string(N);
        string ss = to_string(tmp);
        if(s.length() != ss.length()) break;
        answer++;
    }
    cout<<answer<<"\n";
    return 0;
}