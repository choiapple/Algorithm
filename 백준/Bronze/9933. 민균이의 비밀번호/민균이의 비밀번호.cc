#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len;
    cin>>N;
    string ss[101];
    for(int i=0; i<N; i++){
        cin>>ss[i];
    }
    string tmp, answer = "";
    for(int i=0; i<N; i++){
        tmp = ss[i];
        reverse(ss[i].begin(), ss[i].end());
        for(int j=0; j<N; j++){
            if(tmp == ss[j]){
                answer = ss[j];
            }
        }
    }
    len = answer.length();
    cout<<len<<" "<<answer[len/2]<<"\n";
    return 0;
}