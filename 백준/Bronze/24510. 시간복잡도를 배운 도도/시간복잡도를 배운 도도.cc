#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len, tmp, answer = 0;
    cin>>N;
    string s;
    for(int i=0; i<N; i++){
        cin>>s;
        len = s.length();
        tmp = 0;
        for(int j=0; j<len; j++){
            if(s.substr(j, 3) == "for"){
                tmp++;
                j+=2;
            }else if(s.substr(j, 5) == "while"){
                tmp++;
                j+=4;
            }
        }
        answer = max(answer, tmp);
    }
    cout<<answer<<"\n";
    return 0;
}